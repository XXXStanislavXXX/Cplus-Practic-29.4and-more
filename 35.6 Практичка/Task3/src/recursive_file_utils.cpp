#include "recursive_file_utils.h"
#include <filesystem>
#include <vector>
#include <string>
#include <functional>

std::function<std::vector<std::string>(std::filesystem::path, const std::string)> recursiveGetFileNamesByExtension =
    [](std::filesystem::path path, const std::string extension) -> std::vector<std::string> {
        namespace fs = std::filesystem;
        std::vector<std::string> result;
        try {
            if (!fs::exists(path)) return result;
            for (auto it = fs::recursive_directory_iterator(path); it != fs::recursive_directory_iterator(); ++it) {
                try {
                    const fs::directory_entry& entry = *it;
                    if (entry.is_regular_file()) {
                        if (entry.path().extension().compare(extension) == 0) {
                            result.push_back(entry.path().filename().string());
                        }
                    }
                } catch (const fs::filesystem_error&) {
                    // skip unreadable entries
                }
            }
        } catch (const fs::filesystem_error&) {
            // top-level error (e.g. path inaccessible) -> return empty result
        }
        return result;
};
#include <iostream>
#include <string>
#include <filesystem>
#include "recursive_file_utils.h"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <path> <extension>\n"
                  << "Example: " << argv[0] << " D:\\\\dir1 .txt\n";
        return 1;
    }

    std::filesystem::path searchPath = argv[1];
    std::string extension = argv[2];
    if (!extension.empty() && extension.front() != '.') {
        extension.insert(extension.begin(), '.');
    }

    auto names = recursiveGetFileNamesByExtension(searchPath, extension);
    for (const auto& name : names) {
        std::cout << name << '\n';
    }

    return 0;
}
#pragma once

#include <vector>
#include <string>
#include <filesystem>
#include <functional>

/// Returns a list of file names (not full paths) under the given path
/// that have the specified extension. The extension must include the dot,
/// e.g. ".txt". The function will skip entries that cannot be accessed.
/// Signature: (std::filesystem::path, const std::string) -> std::vector<std::string>
extern std::function<std::vector<std::string>(std::filesystem::path, const std::string)> recursiveGetFileNamesByExtension;

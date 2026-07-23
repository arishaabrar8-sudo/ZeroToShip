#include <iostream>
#include <filesystem>
#include "config.h"

namespace fs = std::filesystem;

int main()
{
    std::cout << "=====================================\n";
    std::cout << "      DoomFolder - Phase 1\n";
    std::cout << "=====================================\n\n";

    // Verify std::filesystem
    std::cout << "Current Working Directory:\n";
    std::cout << fs::current_path() << "\n\n";

    // Display configuration values
    std::cout << "Storage Rules\n";
    std::cout << "------------------------------\n";
    std::cout << "Large File Threshold : "
              << LARGE_FILE_SIZE_MB << " MB\n";

    std::cout << "Old File Threshold   : "
              << OLD_FILE_DAYS << " days\n\n";

    std::cout << "Supported ZIP Extensions:\n";
    for (const auto& ext : ZIP_EXTENSIONS)
    {
        std::cout << " - " << ext << '\n';
    }

    std::cout << "\nSupported Image Extensions:\n";
    for (const auto& ext : IMAGE_EXTENSIONS)
    {
        std::cout << " - " << ext << '\n';
    }

    std::cout << "\nEnvironment setup successful!\n";
    std::cout << "C++17 std::filesystem is working correctly.\n";

    return 0;
}

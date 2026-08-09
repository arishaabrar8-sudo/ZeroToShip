#include "Scanner.h"

#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

std::vector<FileData> Scanner::scan(const std::string& folderPath)
{
    // Vector that stores information about all detected files
    std::vector<FileData> files;

    // Check whether the entered path exists
    if (!fs::exists(folderPath))
    {
        std::cout << "Folder does not exist.\n";

        // Return an empty vector
        return files;
    }

    // Check whether the entered path is actually a directory
    if (!fs::is_directory(folderPath))
    {
        std::cout << "The entered path is not a folder.\n";

        // Return an empty vector
        return files;
    }

    // Recursively scan the folder and all its subfolders
    for (const auto& entry :
         fs::recursive_directory_iterator(
             folderPath,
             fs::directory_options::skip_permission_denied))
    {
        if (entry.is_regular_file())
        {
            FileData file(
                entry.path().filename().string(),
                entry.path().extension().string(),
                entry.path().string(),
                entry.file_size(),
                "Not Implemented Yet"
            );

            // Add the file object to the vector
            files.push_back(file);
        }
    }

    std::cout << "\nTotal files found: "
              << files.size() << "\n";

    // Return all scanned file objects
    return files;
}

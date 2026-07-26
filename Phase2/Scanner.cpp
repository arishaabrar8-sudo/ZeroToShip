#include "Scanner.h"
#include "FileData.h"

#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

void Scanner::scan(const std::string& folderPath)
{
    if (!fs::exists(folderPath))
    {
        std::cout << "Folder does not exist.\n";
        return;
    }

    std::vector<FileData> files;

    for (const auto& entry : fs::recursive_directory_iterator(folderPath))
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

            files.push_back(file);
        }
    }

    std::cout << "\nFiles Found:\n\n";

    for (const auto& file : files)
    {
        std::cout << "Name      : " << file.name << '\n';
        std::cout << "Extension : " << file.extension << '\n';
        std::cout << "Size      : " << file.size << " bytes\n";
        std::cout << "Path      : " << file.path << '\n';
        std::cout << "Modified  : " << file.lastModified << "\n\n";
    }
}

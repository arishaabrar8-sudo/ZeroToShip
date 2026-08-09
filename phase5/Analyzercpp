#include "Analyzer.h"
#include "config.h"

#include <iostream>
#include <algorithm>
#include <cctype>

void Analyzer::analyze(const std::vector<FileData>& files)
{
    std::vector<FileData> largeFiles;
    std::vector<FileData> archiveFiles;
    std::vector<FileData> screenshots;

    for (const auto& file : files)
    {
        // Check large files
        if (file.size > LARGE_FILE_SIZE_MB * 1024ULL * 1024ULL)
        {
            largeFiles.push_back(file);
        }

        // Check archive files
        if (
            file.extension == ".zip" ||
            file.extension == ".rar" ||
            file.extension == ".7z"
        )
        {
            archiveFiles.push_back(file);
        }

        // Check image files
        if (
            file.extension == ".png" ||
            file.extension == ".jpg" ||
            file.extension == ".jpeg"
        )
        {
            screenshots.push_back(file);
        }
    }

    std::cout << "\n===== ANALYSIS REPORT =====\n";

    std::cout << "\nLarge Files: "
              << largeFiles.size() << '\n';

    std::cout << "Archive Files: "
              << archiveFiles.size() << '\n';

    std::cout << "Screenshot/Image Files: "
              << screenshots.size() << '\n';
}

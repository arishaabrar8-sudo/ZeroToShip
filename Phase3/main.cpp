#include <iostream>
#include <vector>

#include "Scanner.h"
#include "Analyzer.h"

int main()
{
    std::cout << "====== DoomFolder ======\n\n";

    std::string folder;

    std::cout << "Enter folder path: ";
    std::getline(std::cin, folder);

    // Create Scanner object
    Scanner scanner;

    // Scan the folder and receive all FileData objects
    std::vector<FileData> files = scanner.scan(folder);

    // If no files were found, stop the program
    if (files.empty())
    {
        std::cout << "No files found or the folder is invalid.\n";
        return 0;
    }

    // Create Analyzer object
    Analyzer analyzer;

    // Send the scanned files to the Analyzer
    analyzer.analyze(files);

    return 0;
}

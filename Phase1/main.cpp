#include <iostream>
#include <filesystem>
#include "config.h"
#include "Scanner.h"

namespace fs = std::filesystem;

int main()
{
    std::cout << "====== DoomFolder ======\n\n";

    std::string folder;

    std::cout << "Enter folder path: ";
    std::getline(std::cin, folder);

    Scanner scanner;
    scanner.scanFolder(folder);

    return 0;
}

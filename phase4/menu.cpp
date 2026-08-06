#include "menu.h"
#include "config.h"

#include <iostream>
#include <algorithm>

void Menu::displayMenu()
{
    std::cout << "\n=============================\n";
    std::cout << "       DOOMFOLDER MENU\n";
    std::cout << "=============================\n";

    std::cout << "1. Storage Dashboard\n";
    std::cout << "2. Sort by Name\n";
    std::cout << "3. Sort by Size\n";
    std::cout << "4. Show Warnings\n";
    std::cout << "0. Exit\n";

    std::cout << "\nEnter Choice: ";
}

void Menu::dashboard(const std::vector<FileData>& files)
{
    uintmax_t totalSize = 0;

    for(const auto &file : files)
        totalSize += file.size;

    std::cout << "\n========== STORAGE DASHBOARD ==========\n";

    std::cout << "Total Files : "
              << files.size() << '\n';

    std::cout << "Total Size  : "
              << totalSize/(1024*1024)
              << " MB\n";

    std::cout << "=======================================\n";
}

void Menu::sortByName(std::vector<FileData>& files)
{
    std::sort(files.begin(), files.end(),
    [](const FileData &a,const FileData &b)
    {
        return a.name < b.name;
    });

    std::cout << "\nFiles Sorted By Name\n\n";

    for(const auto &file:files)
        std::cout<<file.name<<'\n';
}

void Menu::sortBySize(std::vector<FileData>& files)
{
    std::sort(files.begin(), files.end(),
    [](const FileData &a,const FileData &b)
    {
        return a.size>b.size;
    });

    std::cout<<"\nFiles Sorted By Size\n\n";

    for(const auto &file:files)
        std::cout<<file.name<<" - "<<file.size<<" bytes\n";
}

void Menu::showWarnings(const std::vector<FileData>& files)
{
    bool warning=false;

    for(const auto &file:files)
    {
        if(file.size > LARGE_FILE_SIZE_MB*1024ULL*1024ULL)
        {
            warning=true;
            break;
        }
    }

    if(warning)
    {
        std::cout<<"\n******************************\n";
        std::cout<<"WARNING!\n";
        std::cout<<"Large files detected.\n";
        std::cout<<"******************************\n";
    }
    else
    {
        std::cout<<"\nNo storage warnings.\n";
    }
}

#include <iostream>
#include <vector>

#include "Scanner.h"
#include "Analyzer.h"
#include "menu.h"

int main()
{
     std::cout << "DEBUG: Program started\n";
    std::cout.flush();

    std::string folder;

    std::cout << "====== DoomFolder ======\n\n";
    std::cout << "Enter Folder Path: ";

    std::getline(std::cin, folder);

    std::cout << "DEBUG: Folder entered = " << folder << '\n';
    std::string folder;

    std::cout<<"====== DoomFolder ======\n\n";

    std::cout<<"Enter Folder Path: ";
    std::getline(std::cin,folder);

    Scanner scanner;

    std::vector<FileData> files=scanner.scan(folder);

    Analyzer analyzer;
    analyzer.analyze(files);

    Menu menu;

    int choice;

    do
    {
        menu.displayMenu();

        std::cin>>choice;

        switch(choice)
        {
            case 1:
                menu.dashboard(files);
                break;

            case 2:
                menu.sortByName(files);
                break;

            case 3:
                menu.sortBySize(files);
                break;

            case 4:
                menu.showWarnings(files);
                break;

            case 0:
                std::cout<<"Goodbye!\n";
                break;

            default:
                std::cout<<"Invalid Choice\n";
        }

    }while(choice!=0);

    return 0;
}

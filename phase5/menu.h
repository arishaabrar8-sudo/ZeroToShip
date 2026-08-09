#ifndef MENU_H
#define MENU_H

#include <vector>
#include "FileData.h"

class Menu
{
public:
    void displayMenu();
    void dashboard(const std::vector<FileData>& files);
    void sortByName(std::vector<FileData>& files);
    void sortBySize(std::vector<FileData>& files);
    void showWarnings(const std::vector<FileData>& files);
};

#endif

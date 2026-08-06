#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <vector>
#include "FileData.h"

class Scanner
{
public:
    std::vector<FileData> scan(const std::string& folderPath);
};

#endif

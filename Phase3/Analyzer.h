#ifndef ANALYZER_H
#define ANALYZER_H

#include <vector>
#include "FileData.h"

class Analyzer
{
public:
    void analyze(const std::vector<FileData>& files);
};

#endif

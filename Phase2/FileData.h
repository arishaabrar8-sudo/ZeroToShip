#ifndef FILEDATA_H
#define FILEDATA_H

#include <string>

class FileData
{
public:
    std::string name;
    std::string extension;
    std::string path;
    uintmax_t size;
    std::string lastModified;

    FileData(
        const std::string& n,
        const std::string& ext,
        const std::string& p,
        uintmax_t s,
        const std::string& lm
    );
};

#endif

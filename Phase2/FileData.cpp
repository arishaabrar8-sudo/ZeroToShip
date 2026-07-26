#include "FileData.h"

FileData::FileData(
    const std::string& n,
    const std::string& ext,
    const std::string& p,
    uintmax_t s,
    const std::string& lm)
{
    name = n;
    extension = ext;
    path = p;
    size = s;
    lastModified = lm;
}

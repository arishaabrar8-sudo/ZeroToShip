#ifndef CONFIG_H
#define CONFIG_H
// ===============================
// DoomFolder Configuration
// ===============================
// Files larger than this (in MB) are considered "Large Files"
const int LARGE_FILE_SIZE_MB = 100;
// Files older than this (in days) are considered "Old Files"
const int OLD_FILE_DAYS = 365;
// File extensions to detect
const char* ZIP_EXTENSIONS[] = {".zip", ".rar", ".7z"};
const char* IMAGE_EXTENSIONS[] = {".png", ".jpg", ".jpeg"};

#endif

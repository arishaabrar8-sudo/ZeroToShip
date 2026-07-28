## Phase 3: Search and Filtering Systems

In Phase 3, the scanned file data is processed using a dedicated `Analyzer` class. The analyzer applies filtering and categorization logic to organize files into different groups based on their size, age, extension, and file name.

The system identifies large files, old files, screenshots, and archive files. It also includes duplicate detection logic to find files with matching names, sizes, or other selected properties. In addition, the project tracks empty directories so users can identify folders that contain no files.

### Features Implemented

- Created an `Analyzer` class for file processing and categorization.
- Identified large files using the threshold defined in `config.h`.
- Identified old files based on the configured age limit.
- Detected screenshot files using image extensions and file-name patterns.
- Detected archive files such as:
  - `.zip`
  - `.rar`
  - `.7z`
- Implemented duplicate file detection using matching file information.
- Added empty-directory detection.
- Stored each category in separate collections for organized analysis.

### Files Added

- `Analyzer.h` — Declares the `Analyzer` class and its functions.
- `Analyzer.cpp` — Implements file categorization, filtering, duplicate detection, and empty-folder tracking.

### Technologies Used

- C++17
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)
- `std::vector`
- `std::filesystem`
- File filtering and comparison algorithms

### Project Workflow

```text
User enters a folder path
          ↓
Scanner recursively collects file information
          ↓
FileData objects are created
          ↓
Analyzer processes the scanned files
          ↓
Files are categorized into groups
          ↓
DoomFolder displays the analysis results

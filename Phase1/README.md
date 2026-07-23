DoomFolder
Overview
DoomFolder is a C++ command-line storage analyzer that helps users organize and analyze folders. The program scans a selected directory and identifies files based on predefined rules, such as large files, old files, ZIP archives, screenshots, and duplicate files.

Phase 1 Objectives
- Set up the C++ project environment.
- Define storage analysis rules.
- Verify that the program can use the C++17 `std::filesystem` library.
- Plan the project architecture using Object-Oriented Programming (OOP).

Configuration Rules
The following thresholds are defined in `config.h`:
- Large File Threshold: 100 MB
- Old File Threshold: 365 days
- Supported ZIP Extensions:
  - .zip
  - .rar
  - .7z
- Supported Image Extensions:
  - .png
  - .jpg
  - .jpeg

Planned Project Structure

- `main.cpp` – Entry point of the application.
- `config.h` – Stores configuration constants and file categorization rules.
- `Scanner` – Scans folders and collects file information.
- `FileData` – Represents information about a file.
- `Menu` – Displays the command-line interface and user options.

Technologies Used

- C++17
- Standard Template Library (STL)
- std::filesystem
- Object-Oriented Programming (OOP)

## Author

Arisha Abrar

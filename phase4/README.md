# Phase 4: Command-Line Interface & Dashboard

## Overview

Phase 4 focuses on improving the user experience by adding a command-line interface (CLI), interactive menu system, storage dashboard, warning notifications, and sorting features. The goal is to provide a simple and organized way for users to explore the storage analysis results generated in previous phases.

## Features Implemented

### 1. Command-Line Menu
- Developed a menu-driven interface using C++.
- Users can navigate the application by entering numbered options.
- Menu options include:
  - Storage Dashboard
  - Sort Files by Name
  - Sort Files by Size
  - Show Storage Warnings
  - Exit Program

### 2. Storage Dashboard
The dashboard displays a summary of scanned data, including:
- Total number of files scanned
- Total storage space used
- Overall storage statistics

### 3. Warning Notifications
The application displays warning messages when:
- Large files exceed the configured size threshold.
- Other storage alerts are detected.

### 4. Sorting Features
Users can sort scanned files by:
- File Name (Alphabetically)
- File Size (Largest to Smallest)

The sorting functionality is implemented using the C++ Standard Library (`std::sort`).

## Technologies Used

- C++17
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)
- std::filesystem
- std::vector
- std::sort

## Project Structure

```
DoomFolder/
│── main.cpp
│── config.h
│── FileData.h
│── FileData.cpp
│── Scanner.h
│── Scanner.cpp
│── Analyzer.h
│── Analyzer.cpp
│── Menu.h
│── Menu.cpp
│── README.md
│── .gitignore
```

## Program Workflow

```
Start Program
      │
      ▼
Enter Folder Path
      │
      ▼
Scan Files Recursively
      │
      ▼
Analyze File Data
      │
      ▼
Display CLI Menu
      │
      ├── Storage Dashboard
      ├── Sort by Name
      ├── Sort by Size
      ├── Show Warnings
      └── Exit
```

## Learning Outcomes

Through Phase 4, the project demonstrates:
- Command-Line Interface (CLI) design
- Interactive menu-driven programming
- Data presentation in the terminal
- File sorting using STL algorithms
- Modular Object-Oriented Programming in C++

# Student Course Management System LMS (C++ Console Application)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

A complete console-based Student Learning Management System developed as an **individual assignment** using Object-Oriented Programming (OOP) and the Standard Template Library (STL).

## 📋 Project Description

This system provides a menu-driven interface to manage students and their course enrollments efficiently. It demonstrates the practical application of C++ fundamentals, OOP principles, and STL containers & algorithms.

## ✨ Features

- Add a new student (ID, Name, GPA)
- Remove a student using ID
- Search for a student by ID
- Display all registered students
- Enroll a student in a course
- Display all courses for a specific student
- Sort students by GPA in descending order
- Full input validation (Unique ID, GPA range 0.0–4.0, no duplicate courses)

## 🛠️ Technologies & Concepts Used

- **OOP Principles**: Classes, Encapsulation, Constructors, Member Functions
- **Inheritance**: `Person` (base class) → `Student` (derived class)
- **STL Containers**: 
  - `std::vector<Student>`
  - `std::map<int, std::set<std::string>>`
- **STL Algorithms**: 
  - `std::sort()` with lambda
  - `std::transform()` for case conversion
- Modular code structure with separate header and implementation files

## 📁 Project Structure

```tree
Student_LMS/
├── student_lms.cpp                 # Main program with menu and all functions
├── person.h                 # Base Person class definition
├── person.cpp               # Person class implementation
├── student.h                # Student class (inherits from Person)
├── student.cpp              # Student class implementation
├── README.md
└── .gitignore


            
## 📌 Menu Options

| Option | Description |
|--------|-------------|
| 1 | Add Student |
| 2 | Remove Student |
| 3 | Search Student |
| 4 | Display All Students |
| 5 | Enroll Student in Course |
| 6 | Show Student Courses |
| 7 | Sort Students by GPA |
| 8 | Exit |

## ✅ Assignment Requirements Fulfilled

- Inheritance (`Person` → `Student`)
- At least two STL containers (`vector` + `map` + `set`)
- STL algorithms (`sort` + `transform`)
- All 8 menu functions
- Constraints handling

## 👨‍💻 Author

**Mazen Amir**  
Student ID: `[11193]`  
Course: C++ Programming  
Assignment: Individual Project

## 📄 License

University assignment - All rights reserved.

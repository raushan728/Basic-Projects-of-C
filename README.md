# Basic Projects in C

Welcome to my GitHub Repository! Here, you will find 5 beginner-friendly C projects that will help you strengthen your programming skills and gain hands-on experience with C.

## Table of Contents

- [Installation](#installation)
- [Requirements](#requirements)
- [Projects Included](#projects-included)
  - [Calculator](#calculator)
  - [To-Do List](#to-do-list)
  - [Number Guessing Game](#number-guessing-game)
  - [Unit Converter](#unit-converter)
  - [Student Record System](#student-record-system)
- [How to Run the Projects](#how-to-run-the-projects)
- [Conclusion](#conclusion)

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/raushan728/C-Projects-Stage-2.git
   ```

2. Navigate to the project folder:
   ```sh
   cd C-Projects-Stage-2
   ```

## Requirements

To run these programs, you need:
- GCC Compiler - [Download](https://gcc.gnu.org/install/)
- Git - [Download](https://git-scm.com/downloads)

## Projects Included

### Calculator
#### Description
A simple calculator that performs addition, subtraction, multiplication, division, and modulus.

#### Working
- User selects an operation.
- Inputs two numbers.
- The program calculates and displays the result.

#### Output Example
```
----- Simple Calculator -----
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 1
Enter first number: 10
Enter second number: 5
Result: 10 + 5 = 15.00
```

### To-Do List
#### Description
A to-do list program that allows users to manage tasks.

#### Working
- Add, view, and delete tasks.
- File handling ensures task persistence.

#### Output Example
```
----- To-Do List -----
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 1
Enter task: Complete C project
Task added successfully!
```

### Number Guessing Game
#### Description
A fun game where the user has to guess a randomly generated number.

#### Working
- The program generates a random number.
- The user inputs guesses and gets hints like "Too high" or "Too low".
- The game tracks attempts.

#### Output Example
```
----- Number Guessing Game -----
Guess a number between 1 and 100:
10
Try a higher number!
50
Try a lower number!
38
Congratulations! You guessed the number in 5 attempts.
```

### Unit Converter
#### Description
A conversion program that converts temperature, distance, and weight.

#### Working
- Converts Celsius to Fahrenheit, kilometers to miles, kilograms to pounds.
- User selects conversion type and enters value.

#### Output Example
```
---- Unit Converter ----
Select a conversion type:
1. Kilometers to Meters
2. Celsius to Fahrenheit
3. Exit
Enter your choice: 1
Enter value in Kilometers: 5
5.00 Kilometers = 5000.00 Meters
```

### Student Record System
#### Description
A student record management system to store and retrieve student details.

#### Working
- Add, view, update, and delete student records.
- Uses file handling to store data permanently.

#### Output Example
```
---- Student Record System ----
1. Add Student Record
2. View Students
3. Exit
Enter your choice: 1
Enter Name: Rajesh
Enter Roll No: 101
Enter Marks: 85
Student record added successfully!
```

## How to Run the Projects

Compile and run any project:
```sh
gcc project_name.c -o project_name
./project_name
```
(Replace `project_name.c` with the actual file name.)

## Conclusion

These beginner projects cover file handling, loops, conditional statements, and user input. They are great for improving logical thinking and coding skills.



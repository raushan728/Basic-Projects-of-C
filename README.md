# Basic-Projects-of-C


# Basic C Projects

Welcome to my GitHub repository! 🚀 Here, you will find **5 basic C projects** that will help you strengthen your programming skills and gain hands-on experience with C.

## 📌 Projects Included

### 1️⃣ Calculator

A simple calculator that performs basic arithmetic operations like addition, subtraction, multiplication, division, and modulus.

- **Features:**

  - Addition (+), Subtraction (-), Multiplication (\*), Division (/), and Modulus (%)
  - User input support
  - Displays the result instantly

- **How It Works:**

  - The user selects an operation.
  - Inputs two numbers.
  - The program calculates and displays the result.

🚀 Output Example.

----- Simple Calculator -----
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Exit
Enter your choice: 1
Enter first number: 10
Enter second number: 5
Result: 10 + 5 = 15.00

Enter your choice: 3
Enter first number: 8
Enter second number: 7
Result: 8 * 7 = 56.00

Enter your choice: 4
Enter first number: 10
Enter second number: 0
Error! Division by zero is not allowed.

Enter your choice: 5
Enter first number: 20
Enter second number: 3
Result: 20 % 3 = 2

Enter your choice: 6
Exiting program...


---

### 2️⃣ To-Do List

A simple to-do list program that allows users to manage tasks.

- **Features:**

  - Add new tasks
  - Delete completed tasks
  - View all tasks
  - Save tasks using file handling

- **How It Works:**

  - The user can enter a task to add it to the list.
  - Tasks are displayed in an ordered list.
  - The user can remove tasks by selecting them.
  - Data is saved using file handling to retain tasks between program runs.

🚀 Output Example.

----- To-Do List -----
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 1
Enter task: I am Raushan
Task added successfully!

Enter your choice: 1
Enter task: From Bihar
Task added successfully!

Enter your choice: 2

----- Your Tasks -----
1. I am Raushan
2. From Bihar

Enter your choice: 3
Enter task number to delete (or 0 to delete all): 2
Task deleted successfully!

Enter your choice: 4
Exiting program...


___

### 3️⃣ Number Guessing Game

A fun game where the user has to guess a randomly generated number.

- **Features:**

  - Random number generation
  - User input for guessing the number
  - Hints whether the guessed number is too high or too low
  - Keeps track of attempts

- **How It Works:**

  - The program generates a random number within a specified range.
  - The user inputs guesses until they find the correct number.
  - The program provides hints like "Too high" or "Too low".
  - The game ends when the user guesses correctly, displaying the number of attempts taken.
  
 🚀 Output Example.  
   -----Number Guessing game-----  
Guess a number between 1 and 100:  
10  
Try a higher number!  

30  
Try a higher number!  

60  
Try a lower number!  

50  
Try a lower number!  

40  
Try a lower number!  

35  
Try a higher number!  

38  
Try a lower number!  

37  
Congratulations! You guessed the number in 8 attempts.  

Do you want to play again? (Press 'y' to continue, any other key to exit): y  

Guess a number between 1 and 100:  
45  
Try a higher number!  

70  
Try a lower number!  

55  
Try a lower number!  

50  
Try a lower number!  

48  
Congratulations! You guessed the number in 5 attempts.  

Do you want to play again? (Press 'y' to continue, any other key to exit): n  
Thank you for playing!  

---

### 4️⃣ Unit Converter

A simple program that converts units like temperature, distance, and weight.

- **Features:**

  - Convert Celsius to Fahrenheit and vice versa
  - Convert kilometers to miles and vice versa
  - Convert kilograms to pounds and vice versa

- **How It Works:**

  - The user selects the type of conversion.
  - Inputs the value to be converted.
  - The program calculates and displays the converted value.
 
 🚀 Output Example.  
 ---- Unit Converter----  
Welcome to Unit Converter!
Select a conversion type:
1. Kilometers to Meters
2. Meters to Kilometers
3. Kilograms to Grams
4. Grams to Kilograms
5. Celsius to Fahrenheit
6. Fahrenheit to Celsius
7. Exit

Enter your choice: 1
Enter value in Kilometers: 5
5.00 Kilometers = 5000.00 Meters

Do you want to convert again? (Press 'y' to continue, any other key to exit): y

Select a conversion type:
1. Kilometers to Meters
2. Meters to Kilometers
3. Kilograms to Grams
4. Grams to Kilograms
5. Celsius to Fahrenheit
6. Fahrenheit to Celsius
7. Exit

Enter your choice: 5
Enter temperature in Celsius: 100
100.00°C = 212.00°F

Do you want to convert again? (Press 'y' to continue, any other key to exit): n
Thank you for using Unit Converter!

---

### 5️⃣ Student Record System

A basic student record management system to store and retrieve student details.

- **Features:**

  - Add new student records
  - View all records
  - Search for a student by name or roll number
  - Delete student records

- **How It Works:**

  - The user inputs student details (name, roll number, marks, etc.).
  - The program stores the details in a file.
  - The user can search for and retrieve student records.
  - The user can delete records if needed.

## 🛠 Requirements

To run these programs, you need:

- A C compiler (GCC, Clang, or Turbo C)
- A terminal or command prompt

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/basic-c-projects.git
   ```
2. Navigate to the project folder:
   ```bash
   cd basic-c-projects
   ```
3. Compile and run any project:
   ```bash
   gcc calculator.c -o calculator
   ./calculator
   ```
   *(Replace **********************`calculator.c`********************** with any other project's file name.)*



###



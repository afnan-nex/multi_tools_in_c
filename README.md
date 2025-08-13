# **Multi-Tool CLI Utility**

A simple command-line interface (CLI) utility written in C that provides multiple tools in a single executable. The program includes the following features:

*   **Unit Converter**: Convert between Celsius to Fahrenheit, Meters to Feet, and Kilograms to Pounds.
*   **Password Generator**: Generate random passwords of user-specified length using a mix of uppercase letters, lowercase letters, numbers, and special characters.
*   **File Information Checker**: Retrieve basic file information such as size and last modified time for a given file path.
*   **Calculator**: Perform basic arithmetic operations (addition, subtraction, multiplication, and division) on two numbers.

## **Getting Started**

### **Prerequisites**

*   A C compiler (e.g., gcc) installed on your system.
*   Standard C libraries (stdio.h, stdlib.h, string.h, time.h, sys/stat.h).

### **Installation**

Clone the repository:  
```
git clone https://github.com/afnan-nex/multi_tools_in_c.git
```
Navigate to the project directory:  
```
cd multi_tools_in_c
```
Compile the program using a C compiler:  
```
gcc multi_tools.c -o multi_tools
```
Run the executable:  
```
./multi_tools
```
## **Usage**

Upon running the program, a menu will be displayed with the following options:

1.  Unit Converter
2.  Password Generator
3.  File Information Checker
4.  Calculator
5.  Exit

Enter the number corresponding to your desired tool and follow the prompts to use it.

### **Examples**

*   **Unit Converter**: Select option 1, choose a conversion type (e.g., 1 for Celsius to Fahrenheit), and input a value to convert.
*   **Password Generator**: Select option 2, enter the desired password length, and a random password will be generated.
*   **File Information Checker**: Select option 3, provide a valid file path, and the program will display the file size and last modified time.
*   **Calculator**: Select option 4, enter an expression in the format a op b (e.g., 5 + 3), and the result will be displayed.

## **License**

This project is licensed under the MIT License. See the [LICENSE](https://grok.com/chat/LICENSE) file for details.

## **Acknowledgments**

*   Built using standard C libraries.
*   Inspired by the need for a simple, all-in-one CLI utility.

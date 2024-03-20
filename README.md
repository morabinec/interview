# Student Grade Analyzer - C Programming Task

## Task Description
This C program manages student grades, allowing users to input grades for a specified number of students, calculates the average grade, and displays the names of students who scored above the average.

## Requirements
- C programming language
- Implementation of functions for input, average calculation, and displaying students above average
- Usage of an array to store the grades
- Proper error handling for input validation

## Example Output

```c
Enter the number of students (max 50): 4
Enter grade for student 1: 85
Enter grade for student 2: 92
Enter grade for student 3: 78
Enter grade for student 4: 88
Average grade: 85.75

Students above average:
- Student 2: 92
- Student 4: 88

```

## Deliverables
- Provide the complete C program code along with comments explaining the code.
- Ensure the program is well-organized, using meaningful variable and function names.

## Code Template

```c
#include <stdio.h>

// Function to input grades
void inputGrades(int grades[], int n) {
    // Your code here
}

// Function to calculate average
float calculateAverage(int grades[], int n) {
    // Your code here
}

// Function to display students above average
void displayAboveAverage(int grades[], int n, float average) {
    // Your code here
}

int main() {
    // Your main function code here
    return 0;
}

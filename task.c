#include <stdio.h>
#include <stdlib.h>

// Define the maximum value of students
#define MAX_VALUE 50

// Function to input grades
void inputGrades(int grades[], int *n) 
{
    // Input number of students
    printf("Enter the number of students (max 50): ");
    // Checks for invalid inputs for the number of students
    if (scanf("%d", n) != 1 || *n <= 0 || *n > MAX_VALUE) 
    {
        printf("Invalid input.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *n; i++) 
    {
        // Input grade of each student
        printf("Enter grade for student %d: ", i + 1);
        // Checks for invalid inputs for the grades of students
        if (scanf("%d", &grades[i]) != 1 || grades[i] < 0 || grades[i] > 100) 
        {   
            printf("Invalid input.\n");
            exit(EXIT_FAILURE);
        }
    }
}

// Function to calculate average
float calculateAverage(int grades[], int n) 
{
    float sum = 0.0;
    
    for (int i = 0; i < n; i++) 
    {
        sum += grades[i];
    }
    return sum / n;
}

// Function to display students above average
void displayAboveAverage(int grades[], int n, float average) 
{
    printf("Students above average:\n");
    // Iterate the grade array to find above average students
    for (int i = 0; i < n; i++) 
    {   
        if (grades[i] > average) 
        {
            printf("- Student %d: %d\n", i + 1, grades[i]);
        }
    }
}

// Main function
int main() {

    int n = 0;
    int grades[MAX_VALUE];

    // Calling the function to input grades
    inputGrades(grades, &n);

    // Calling the function to count the grade average
    float averageGrade = calculateAverage(grades, n);
    printf("Average grade: %.2f\n", averageGrade);

    // Calling the function to display above average students
    displayAboveAverage(grades, n, averageGrade);

    return 0;
}

// wap to for input of any student like branch rool no and marks of 5 subject find out the total and percentage of marks with the help of modulart prgraming 
#include <stdio.h>

void inputStudent(char branch[], int *roll, int marks[]);
int calculateTotal(int marks[]);
float calculatePercentage(int total);
void displayResult(char branch[], int roll, int total, float percentage);

int main()
{
    char branch[20];
    int roll, marks[5], total;
    float percentage;

    inputStudent(branch, &roll, marks);

    total = calculateTotal(marks);
    percentage = calculatePercentage(total);

    displayResult(branch, roll, total, percentage);

    return 0;
}

// Function to input student details
void inputStudent(char branch[], int *roll, int marks[])
{
    int i;

    printf("Enter Branch: ");
    scanf("%s", branch);

    printf("Enter Roll Number: ");
    scanf("%d", roll);

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to calculate total marks
int calculateTotal(int marks[])
{
    int i, total = 0;

    for(i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    return total;
}

// Function to calculate percentage
float calculatePercentage(int total)
{
    return total / 5.0;
}

// Function to display result
void displayResult(char branch[], int roll, int total, float percentage)
{
    printf("\n----- Student Result -----\n");
    printf("Branch      : %s\n", branch);
    printf("Roll Number : %d\n", roll);
    printf("Total Marks : %d\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("\n----- Student End -----\n");
}

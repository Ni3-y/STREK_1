#include<stdio.h>

int main()
{
    

    // Local Variable Definition
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Keep it up!\n\n");
            break;
        case 'C':
            printf("Well done\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n",grade);
    printf("\n\t Coding is Fun !\n");
    return 0;
}
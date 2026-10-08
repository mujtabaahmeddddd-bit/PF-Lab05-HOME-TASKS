#include <stdio.h>

int main()
{
    int dept, theory, practical, attendance;
    int tr, pr, ar, rem;

    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Business Administration\n");
    printf("4. Mathematics\n");

    printf("Enter department: ");
    scanf("%d", &dept);

    printf("Enter theory marks: ");
    scanf("%d", &theory);

    printf("Enter practical marks: ");
    scanf("%d", &practical);

    printf("Enter attendance: ");
    scanf("%d", &attendance);

    switch(dept)
    {
        case 1:
            tr = 50;
            pr = 40;
            ar = 75;
            printf("\nDepartment: Computer Science\n");
            break;

        case 2:
            tr = 55;
            pr = 45;
            ar = 75;
            printf("\nDepartment: Electrical Engineering\n");
            break;

        case 3:
            tr = 50;
            pr = 35;
            ar = 80;
            printf("\nDepartment: Business Administration\n");
            break;

        case 4:
            tr = 60;
            pr = 40;
            ar = 75;
            printf("\nDepartment: Mathematics\n");
            break;

        default:
            printf("Invalid department\n");
            return 0;
    }

    printf("Passing Requirements: Theory %d, Practical %d, Attendance %d%%\n",
           tr, pr, ar);

    if(theory >= tr && practical >= pr && attendance >= ar)
        printf("Result: Passed\n");
    else
        printf("Result: Failed\n");

    printf("Distinction: %s\n",
           (theory >= 85 && practical >= 80 && attendance >= 90)
           ? "Eligible" : "Not Eligible");

    rem = theory % 3;

    if(rem == 0)
        printf("Seat Category: A\n");
    else if(rem == 1)
        printf("Seat Category: B\n");
    else
        printf("Seat Category: C\n");

    return 0;
}
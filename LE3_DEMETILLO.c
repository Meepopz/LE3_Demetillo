#include <stdio.h>

int main()
{
    char yourCompleteName[30] = "";
    char yourStudentSection[30] = "";
    int myFirstNumber;
    int mySecondNumber;

    printf("Enter Complete Name: ");
    fgets(yourCompleteName, sizeof(yourCompleteName), stdin);
    
    printf("Enter Section: ");
    fgets(yourStudentSection, sizeof(yourStudentSection), stdin);

    printf("Enter First Number = ");
    scanf("%d", &myFirstNumber);

    printf("Enter Second Number = ");
    scanf("%d", &mySecondNumber);

    printf("\n");

    printf("Student Name: %s", yourCompleteName);
    printf("Section: %s", yourStudentSection);

    printf(" Results: \n");
    
    printf("%d + %d = %d\n", myFirstNumber, mySecondNumber, myFirstNumber + mySecondNumber);
    printf("%d - %d = %d\n", myFirstNumber, mySecondNumber, myFirstNumber - mySecondNumber);
    printf("%d * %d = %d\n", myFirstNumber, mySecondNumber, myFirstNumber * mySecondNumber);
    printf("%d / %d = %d\n", myFirstNumber, mySecondNumber, myFirstNumber / mySecondNumber);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <trimester.h>

void read_student()
{
    char first_name[255],
         last_name[255];

    printf("Enter your first name: ");
    fgets(first_name, sizeof(first_name), stdin);
    printf("Enter your last name: ");
    fgets(last_name, sizeof(last_name), stdin);
}

int check_for_discount(float average)
{
    if (average >= 18)
        return 30;

    if (average >= 17)
        return 20;

    if (average < 12)
        return 0;

    return 0;
}

bool check_to_suspend(float average)
{
    if (average < 12)
        return true;
    else
        return false;
}


void show_message(bool suspend, int discount, float average)
{
    if (suspend != true && discount != 0)
        printf("Your average marks is %0.1f and you get a discount of %d\n", average, discount);

    if (suspend != true && discount == 0)
        printf("Your average marks is %0.1f but you don't unfortunately, get a discount\n", average, discount);

    if (suspend == true && discount == 0)
        printf("Your average marks is %0.1f so you get suspended for one trimester\n", average, discount);
}

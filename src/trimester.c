#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <trimester.h>
#define BUFFER_SIZE 8

void read_student() {
    char first_name[255],
         last_name[255];

    printf("First Name: ");
    fgets(first_name, sizeof(first_name), stdin);
    printf("Last Name: ");
    fgets(last_name, sizeof(last_name), stdin);
}
int check_for_discount(float average) {
    if (average >= 18)
        return 30;

    if (average >= 17)
        return 20;

    if (average < 12)
        return 0;

    return 0;
}

bool check_to_suspend(float average) {
    if (average < 12)
        return true;
    else
        return false;
}


void show_message(bool suspend, int discount, float average)
{
    if (suspend != true && discount != 0)
        printf("The Student's Average Marks Is %0.1f And [He/She] Gets A Discount Of %d\n", average, discount);

    if (suspend != true && discount == 0)
        printf("The Student's Average Marks Is %0.1f But As A Student [He/She] Does Not Unfortunately, Get A Discount\n", average, discount);

    if (suspend == true && discount == 0)
        printf("The Student's Average Marks Is %0.1f So [He/She] Gets Suspended For One Semester\n", average, discount);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define BUFFER_SIZE 8

void read_student();
void show_message(bool suspend, int discount, float average);

int check_for_discount(float average);
bool check_to_suspend(float average);

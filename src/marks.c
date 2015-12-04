#include <stdio.h>
#include <stdlib.h>
#define MARK_SIZE 8

int read_marks(float marks[], int size)
{
    char mark[MARK_SIZE];
    int c = 0;

    for (int i = 0; i < size; i++) { 
        c += 1;
        printf("mark[%d]: ", i+1);
        fgets(mark, sizeof(mark), stdin);
        marks[i] = strtol(mark, NULL, 0);
    }

    return c;
}

float calculate_average(float marks[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += marks[i];

    return sum / size;
}

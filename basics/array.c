#include <stdio.h>

/*
Challenge:

Write a program that calculates and prints the average of an array of integers.

Requirements:

    Declare an array with at least 5 integers.
    Calculate the average of the array elements.
    Print the average.
*/

int main(void){
    int array[] = {1,3,5,7,9,11};
    size_t asize = sizeof(array) / sizeof(array[0]);
    int sum = 0; int media;
    for (size_t i = 0; i < asize; ++i){
        sum += array[i];
    }
    media = sum / asize;
    printf("%d\n", media);
    return 0;
}
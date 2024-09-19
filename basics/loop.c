#include <stdio.h>

/*
Challenge:

Write a program that prints the even numbers from 2 to 10, each on a new line.

Requirements:

    Use a for loop to iterate through the numbers.
    Print only even numbers.
*/

int isEven(int num){
    if (num % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(void){
    for (int num = 2; num <= 10; num++) {
        if (isEven(num)){
            printf("%d\n", num);
        }
    }
    return 0;
}
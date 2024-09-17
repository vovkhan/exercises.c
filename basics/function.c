#include <stdio.h>

/*
Challenge:

Write a function that calculates the area of a rectangle given its width and height,
and use this function in your main function to display the area of a rectangle with width 5 and height 8.

Requirements:

    Create a function rectangleArea(int width, int height) that returns the area.
    Print the result in the main function.
*/

int rectangleArea(int width, int height){
    int area = width * height;
    return area;
}

int main(void){
    int rec_width = 5;
    int rec_height = 8;

    int area = rectangleArea(5, 8);
    printf("The area is: %d.\n", area);
}
// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
    // 1. Declare the variables for radius and area
    // What are the 3 types? What should we use?... Followed by name
    
    // INT - whole numbers
    // DOUBLE - nums with decimal points
    // CHAR - single letter chars - 'c'
    double radius = 0;
    double area = 0;
    // char my_char = ' ';

    scanf("%lf", &radius);
    area = PI * (radius * radius);
  
    printf("The area is %lf\n", area);

    return 0;
}

    // 2. Initalise the variables
    // Safer to always initialise 
    // radius = 0;

    // 3. Calculate the area of the circle - area = PI * r^2
    // #define PI as its a magic number and the value of it will never change
    
    // AREA = pi * r^2

    // 4. Print the result - How do we print the value of variables?
    // Formatters?
    // INT - %d
    // DOUBLE - %lf
    // chars - %c
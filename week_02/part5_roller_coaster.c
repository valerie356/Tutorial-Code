// part5_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 120
#define THREASHOLD 140

int main(void) {
    // if vs else if vs else -> use the number line example
    double i = 0;
    double height = 0;
    scanf("%lf", &height);

    if (height <= 0) {
        printf("ERROR: Invalid height\n");
    } else if (height < MIN_HEIGHT) {
        printf("Not tall enough to ride\n");
    } else if (height >= MIN_HEIGHT || height < THREASHOLD) {
        printf("Can ride, but only with an adult\n");
    } else {
        printf("Can ride, and can ride alone\n");
    }

    return 0;
}


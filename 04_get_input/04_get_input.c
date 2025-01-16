#include <stdio.h>

int main(){
    int square_side = 1;
    int square_perim = 0;
    int square_area = 0;

//write the prompt
    puts("Enter the length of a side of a square");


// get the input
    scanf("%d", &square_side);

// do the math
//& - address operator
    square_perim = square_side * 4;

    // create the output

    printf("The perimeter of a square with side %d is %d\n", square_side, square_perim);
    
    return 0;
}
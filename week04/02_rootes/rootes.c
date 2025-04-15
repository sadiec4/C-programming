
/*
    the program calculates the rootes of quadratic equation
    ax^2 + bx + c = 0
*/

#include <stdio.h>
#include <math.h>

//function prototypes 

void printPrompt(char ch);
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    //calculate rootes
    printRootes(a,b,c);

    return 0;
}

// calling functions

void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch);
}

int getCoefficient(void) {
    int coef = 0;
    scanf("%d", &coef);

    return coef;
}

int countDiscriminant(int a, int b, int c){
    // b^2-4ac
    return (b * b) - (4 * a * c);
}

void printRootes(int a, int b, int c) {
    int discrm = countDiscriminant(a,b,c);
    if (discrm < 0){
        puts("No Real rootes");
    }
    if (discrm == 0){
        // -b/2a
        double x = (-b) / (2 * a);
        printf("x= %f\n", x);
    }
    if (discrm > 0){
        // -b +- sqrt(discrm) / (2 * a)
        double x1 = (-b + sqrt(discrm)) / (2 * a);
        double x2 = (-b - sqrt(discrm)) / (2 * a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }
}
/*
    function thatprints a description based on a given temperature
*/
#include <stdio.h>

/*
//prototype 
void temperatureDescription(double temp);

//checks whether the given number is between 
void checkRange(int number);
*/
// three ints and display
int largest(int num1, int num2, int num3);


int main(void){
    /*int temp = 0;
    puts("what is your tempertature?");
    scanf("%lf", temp);

    int number = 0;
    puts("enter a number:");
    scanf("%lf", number);
*/
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Enter 3 different numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    return 0;
}
/*
//implementation
void temperatureDescription(double temp){ 
    if (temp > 101) {
        puts("High Fever");
    }
    else if(temp>99){
        puts("Low fever");
    }
    else (temp > 97) {
        puts("low temperature");
    }
}

//check range funct
void checkRange(int number){
    if (number>= 0 && number <=10 && number % 2 == 0){
    //if (number <=10){ : ^ , putting the "&&" there mkes no need for this if statement
        puts("YES");
    }
    else {
        puts("NO");
    }
}
*/
//threee ints implement
int largest(int num1, int num2, int num3){
    if (num1 >= num2 && num1 >= num3){
        return num1;
    }
    if (num2 >= num1 && num2 >= num3){
        return num2; 
    }    
    if (num3 >= num2 && num3 >= num1){
        return num3;
    }
}

/*
    Practice with non-void functions
*/

#include <stdio.h>
// function prototypes 
// the function named getFive which returns an integer and takes no argument
int getFive(void);

// function named printCourse which returns nothing and takess one integer argument
void printCourse(int course_number);

//void function that takes an integer and describes the weather
void describeWeather(int temp);

//the function that converts the given number of miles to kilometers
double milesToKms(int miles);

//the function that converts the given number of kilometers to miles
double kmsToMiles(int kms);

int main(void) {
    int var = 0;

    // call getFive function
    var = getFive();
    printf("var is %d\n", var);
    
    //call printCourse
    printCourse(2271);

    //test describeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    // call miles to km
    int miles = 0;
    printf("Enter number of miles: ");
    scanf("%d", &miles);
    kmsToMiles(miles);
    
    // call km to miles
    int kms = 0;
    printf("Enter number of kilometers: ");
    scanf("%d", &kms);
    milesToKms(kms);
    
    return 0;
}

// getFive implementation
int getFive(void) {
    int five = 5;

    return five;
}

/*
course number// switch from getFive
*/

void printCourse(int course_number) {
    printf("You are in course COP %d.\n", course_number);

}

//WEATHER IMPLEMENTATION
void describeWeather(int temp){
    // if statements !! ^_^
    if (temp > 70) { 
        puts("HOT");
    }
    if (temp <= 70) {
        puts("COLD");
    }
}


// miles to kilomters func implement
double milesToKms(int miles) {
    double kms = miles * 1.609;
    return 0;
}
// miles to kilomters func implement
double kmsToMiles(int kms) {
    double miles = kms / 1.609;
    return 0;
}

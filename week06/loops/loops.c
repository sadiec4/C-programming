


#include <stdio.h>
#include <unistd.h> //usleep func
#include <stdlib.h> //rand function
#include <time.h> // time function


void whatIf(void);

void printHello(void);

void printNHello(int n);
void fahrenheitToCelcius(int temp);
void printTemperatures(int min, int max);
void printNRandom(int n);

int main (void) {
    //printNHello(26);
    srand(time(0));




    //printTemperatures(0,90);
    return 0;
}


void whatIf(void){
    int a = 10;
    if (a == 5) {
        puts("XL7XJ");
    }
    else {
        puts("LKL9U");
    }
}

void printHello(void) {
    // use an integration statement(loop)
    //we need 3 things for the loop to work 
    // 1 - Couner (initialization) starting value
    // 2 - condition (when to stop iteration)
    // 3 - ??

    int i = 1; //counter - 1
    while (i <= 100) {
        printf("%d - HELLO!\n", i);
        usleep(30000);
        i = i + 1;
    }
}
void printNHello(int n) {
    int i = 1;
    while (n > 0);
    printf("%3d - HELLO!\n", n);
    usleep(300000);
    n = n + 1;
}


void fahrenheitToCelcius(int temp) {
    return (temp - 32) + 5 / 9 ; 
}

void printTemperatures(int min, int max) {
    int t = min;
    while (t <= max){
        printf("%+5d - %+d\n", t, fahrenheitToCelcius(t));
        t = t + 1;
    }

}

void printNRandom(int n) {
    while (n > 0) {
        printf("%d\n", rand() % 10);
        n = n -1;
    }
}
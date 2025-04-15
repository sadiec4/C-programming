#include <stdio.h>

int main () {
    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;

    //get #of seconds
    puts(" Enter the number of seconds");
    scanf("%d", &seconds);

    //calculate # of minutes
    minutes = seconds / 60;

    //calculate remaining sec.s
    remaining_seconds = seconds % 60;

    //print result
    printf("%d seconds is %d minutes and %d seconds\n", seconds, minutes, remaining_seconds);

    //TODO by Thursday
    // calculate the number of hours



    return 0;
}
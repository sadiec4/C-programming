#include <stdio.h>
double avgStudentGradeSentinel(void);

//dont count -1 as grade

int main(void){
    /*int x=4, y = 0, z = 0, k = 2;
    y += x++ +1;
    z -= ++y +2;
    k *= --z;
    printf("%d,%d,%d,%d", x,y,z,k);*/
    printf ("%.2lf\n", avgStudentGradeSentinel());
    return 0;
}

double avgStudentGradeSentinel(void){
    double grade = 0;
    double totalGrade = 0;
    int numGrades = 0;

    while (grade != -1) { // -1 -> sentinal value (TO EXIT)
        //get grade
        printf("Enter the grade (-1 to exit): ");
        scanf("%lf", &grade);
//get total
        if (grade >=0){
            totalGrade += grade;
            numGrades++;
        }
    }
    return totalGrade / numGrades;
}
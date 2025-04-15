/*
    intro to functions in C

        You cannot create a funtion insid of another function
*/

#include <stdio.h>

// function format 
// <return_type> <function_name> (<parameters(arguments, inputs)>or empty)
//  {
//  }
// the function doesnt take any arguments an doesnt return any value
void print_course(void){
    printf("You are in COP%d\n", 2271);
}

void draw_circle(void) {
    puts("    *  *");
    puts("  * ^  ^ *");
    puts(" *        *");
    puts("  *   w  *");
    puts("    *  *");
}

void draw_carrot(void) {
    puts("     /\\");
    puts("    /  \\");
    puts("   /    \\");
    puts("  /      \\");
}

void draw_line(void) {
    puts(" /~~~~~~~~\\");
}

void draw_triangle(void) {
    draw_carrot();
    draw_line();
}
void draw_stick_figure(void) {
    draw_circle();
    draw_triangle();
    draw_carrot();

}
int main() {
// function call
    /*print_course();
    draw_circle();
    draw_carrot();
    draw_line();
*/
    //draw_triangle();
    draw_stick_figure();
    return 0;
}
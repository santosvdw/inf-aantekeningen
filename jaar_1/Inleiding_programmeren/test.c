#include <stdio.h>

int main() {
    int number = 5;
    number = 'a';

    // what type is number?
    // Answer here: number is a char

    // How can number be a char when it was assigned to be a number?
    // Answer here: number was assigned to be a number, but then it was assigned to be a char. The compiler doesn't care about the type of the variable, it just assigns the value to the variable.

    // But C is statically typed so it should care right?
    // Answer here: C is statically typed, but the compiler doesn't care about the type of the variable, it just assigns the value to the variable.

    // Give me the code to print the type of number
    printf("Type: %s\n", __builtin_types_compatible_p(typeof(number), int) ? "int" : "char");

}

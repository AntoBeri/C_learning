#include <stdio.h>

//Rules for variable naming.
//1. Don't start with a digit.
//2. Not recommended start with underscore. Most underscore begining variables are
//   reserved for system use. Using them may cose problems in execution.
//3. C is case sensitive. Using lowercase is used for naming variables and upper case
//   for symbolic constants.
//4. Special characters not allowed in the variable name. Some may work but avoid it.
//   "_" is trated as a character and can be used between the variable name.
//5. Blanks or white spaces not allowed. Use "_" instead of blanks.
//6. Don't use keywords (if, else, for, while, switch, int, float, long, double, etc.)
// TIP: Don't use long names for variables.

int main() {
    int var = 12;

    printf("%d", var);

    return 0;
}
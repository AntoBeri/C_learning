#include <stdio.h>

int main() {
    int var1 = 10, var2 = 11, var3 = 12;
    int two = 2, three = 3, six = 6;

    int result = (two + three) * six / three;

    //The first argument of printf() is allways a string constant.
    printf("Hello World\n"); //Prints some text.
    printf("%d\n", var1); //"d%" is the place holder for a decimal number. It tells to
    //take the next argument in the function and replace it with that.
    //For every place holder in the constant string there must be a same or different
    //value to replace it.
    printf("%d\n%d\n%d\n", var1, var2, var3);
    //printf ("d%"\n%d\n%d\n", var1, var2, ) <- This will raise an error.
    printf("I can write arithmetic expressions like: (%d + %d) * %d / %d ", two, three, six, three);
    printf("and the result of that is: %d", result);

    return 0;
}
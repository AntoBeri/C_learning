#include <stdio.h>

int main() {
    //Variable declaration.
    int var; //Data type sets how much space a variable is going to occupy in memory.
    //Memory allocation depends on the type of the variable.
    // int (integer) data type may take 2 or 4 bytes deppending on the machine.

    //Variable initialization
    int var1 = 3;
    var1 = 4;
    var = var1;

    //Multible variable declaration.
    int var2, var3, var4;

    //Multiple variable assignation.
    var2 = var3 = var4 = 5;

    printf("%d\n", var1); //"%d" allows to print the value in the variable.
    printf("%d\n", var); //"\n" indicates to jump to the next line after printing.
    printf("------------------------\n");
    printf("%d\n%d\n%d\n", var2, var3, var4); //Print multiple variables in mult lines.

    return 0;
}
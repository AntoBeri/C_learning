//This program prints "Hello World!" to the console window

//.h are header files
#include <stdio.h> //Preprocessor directive
//Preprocessor replaces the text starting with # with the file content before 
//the compilation begins.
//The headers are not the libraries itself but a declaration of what exists in the
//library, and the C standard library is where the actual definitions of 
//functions are.
//A program called linker maps the prototypes in the header to the actual code in the
// C standard library.

int main()
{
    printf("Hello World!");

    return 0;
}
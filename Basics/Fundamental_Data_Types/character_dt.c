#include <stdio.h>

//The most common encoding scheme is the ASCII. In there are non-printable characters
//that are the control ones. and the printable characters. It uses 7 bits to encode 
//them therefore there are 128 characters in total. As the minimum is 1 byte (8 bits)
//and ASCII uses only 7 the most significant bit (8th) is always cero.

int main()
{
    char letter1 = 'N';
    char letter2 = 65; //You can also assign integers to char variables. When printing
    //it will print a character and it depends on the format specifier used.

    printf("%c\n", letter2);//%c is the format specifier for character.

    //Integers can be printed by using "%d" even when using a char variable, but
    //char data type can only store 1 byte.

    //Range of character is:
    //unsigned: 0 to 255
    //signed -128 to 127

    //Extended ASCII encoding scheme is used to utilize the 8th bit.
    //For covering other languages with different symbols, different encoding
    //schemes are used.

    //When representing a negative number in binary the most significant place
    //will be negative and always one, the rest places are positive and added to
    //the negative to from a negative number.
    //When representing a negative number in binary that same binary number can represent
    //a positive number. For example: in negative 1111111 = -1 but in positive
    //1111111 = 255.
    char var2 = -128;
    char var3 = 128;
    char var4 = 129;
    char var5 = -127;

    printf("-128 and +128 prints the same characters: %c and %c as they have the same binary representation.\n", var2, var3);
    printf("-127 and +129 prints the same characters: %c and %c as they have the same binary representation.\n", var5, var4);

    //Negative values wont do anything additional in case of character variables
    //each negative value is equivalent to some positive value in extended ASCII.

    //Valid range exceed works the same as in the integer data type.

    return 0;
}

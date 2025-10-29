#include <stdio.h>

int main()
{
    printf("Size of integer on this machine: %d bytes\n", sizeof(int)); 
    //sizeof() is a unary operator, not a function. It returns the size (in bytes) of 
    //any data type provided.
    
    //Range of integer:
    //If 2 bytes (16 bits):
    //Unsigned range: 0 to 65535 (by applying 2**(n) - 1)
    //Signed rage: -32768 to 32767
    //For representing negative values its usually made by using 2's complement range:
    //-(2**(n-1)) to [2**(n-2) - 1]

    //If machine supports 4 byte integer:
    //Unsigned range: o to 4294967295
    //Signed range -2147483648 to 2147483647

    return 0;
}
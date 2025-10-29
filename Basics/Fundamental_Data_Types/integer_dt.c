#include <stdio.h>
#include <limits.h> //Consists of symbolic constants useful in determining max and min
// values of any data type according to the system.

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

    //long and short are modifiers that can change the size of a data type.

    //short reduces the size, if integer is 4 bytes short could be 2.
    printf("Size of short int on this machine: %d bytes\n", sizeof(short int));
    //long allows it to take more memory space, if integer is 4 bytes long may be 8.
    printf("Size of long int on this computer: %d bytes\n", sizeof(long int));

    //Using short and long modifiers doesn't guarantee that short is going to be
    //shorter than int neither that lon is going to be longer than int. It only
    //guarantees the following: sizeof(short) <= sizeof(int) <= sizeof(int)

    //Wether it can make shorter or larger the memory space taken by data types when
    //using modifiers depends entirely on the computer operative system (architecure: if
    //32 or 64 bit and if Linux/MacOS, Windows) because that determines which data model
    //is being used which determines the size of daata types.

    //"Another" modifier is long long which only means:
    //if sizeof(long int) == 4 bytes
    //then sizeof(long long int) == 8 bytes
    //else
    //if sizeof(long int) == 8 bytes
    //then sizeof(long long int) == 8 bytes

    printf("Size of long long int on this computer: %lld bytes\n", sizeof(long long int));
    printf("-----------------------------------------\n");

    int var1 = -10; //By default int makes var1 a signed integer variable.
    unsigned int var2 = 10; //Only can store positive values in this variable.

    //Assigned minimum and maximum data types values.
    int int_min = INT_MIN, int_max = INT_MAX;
    unsigned int uint_min = 0, uint_max = UINT_MAX;
    short int sint_min = SHRT_MIN, sint_max = SHRT_MAX;
    short unsigned int suint_min = 0, suint_max = USHRT_MAX;
    long int lint_min = LONG_MIN, lint_max = LONG_MAX;
    unsigned long int ulint_min = 0, ulint_max = ULONG_MAX;
    long long llint_min = LLONG_MIN, llint_max = LLONG_MAX;
    unsigned long long ullint_min = 0, ullint_max = ULLONG_MAX;

    //Order of unsigned short/long doesnt mind

    printf("Range of signed int is from: %d to %d\n", int_min, int_max);
    printf("Range of unsigned int is from: %u to %u\n", uint_min, uint_max);
    //%u is used to replace an unsigned decimal value.
    printf("Range of short signed integer is from: %d to %d\n", sint_min, sint_max);
    printf("Range of short unssigned int is from: %u to %u\n", suint_min, suint_max);
    printf("Range of long int is from: %ld to %ld\n", lint_min, lint_max);
    //%ld is used to replace long decimal values.
    printf("Range of unsigned long int is from: %lu to %lu\n", ulint_min, ulint_max);
    //%lu is used to replace unsigned long decimal values.
    printf("Range of long long int is from: %lld to %lld\n", llint_min, llint_max);
    //%lld is used to replace long long decimal values.
    printf("Range of unsigned long long int is from: %llu to %llu\n", ullint_min, ullint_max);

    //If the valid range for a data type is exceeded, it will only represent the
    //amount of bits it can read and store whatever that is. Doing that will act
    //as a mod function, repeating the available range everytime it is exceeded.
    //For any n unsigned bit -> mod2**n is used to determine the remain and it is
    //what is going to be stored.

    //Exceed maximum or minimum values of a data type is like a clock, if you exceed
    //the minimum by one you get the maximum and if you exceed the maximum by one
    //you return to the minimum and so on.

    return 0;
}
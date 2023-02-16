#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 *
 * Return:0
 */
int main(void)
{
    printf("The size of char is %ld bytes\n", sizeof(char));
    printf("The size of short is %ld bytes\n", sizeof(short));
    printf("The size of int is %ld bytes\n", sizeof(int));
    printf("The size of long is %ld bytes\n", sizeof(long));
    printf("The size of long long is %ld bytes\n", sizeof(long long));
    printf("The size of float is %ld bytes\n", sizeof(float));
    printf("The size of double is %ld bytes\n", sizeof(double));
    printf("The size of long double is %ld bytes\n", sizeof(long double));
    return (0);
}

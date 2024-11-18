/*  Bob, a curious mathematician, found a unique power function capable of calculating the base raised to an exponent using recursion. Write a program to help Bob explore this function by taking a positive integer base and a non-negative integer exponent as inputs and displaying the result of the power function.



Function signature: long long int power(int base, int exponent)

Input format :
The input consists of two integers, representing the base and exponent, separated by a space.

Output format :
The output prints the result (long long integer) of the base raised to the power exponent.
*/

#include <stdio.h>

long long int power(int base, int exponent) {
    if (exponent == 0)
        return 1;

    if (exponent % 2 == 0) {
        long long int temp = power(base, exponent / 2);
        return temp * temp;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    scanf("%d", &base);
    scanf("%d", &exponent);
    
    long long int result = power(base, exponent);
    
    printf("%lld", result);
    return 0;
}

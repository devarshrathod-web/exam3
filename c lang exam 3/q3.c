#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

   
    printf("Enter any number: ");
    scanf("%d", &num);


    lastDigit = num % 10;

   
    while (num >= 10) {
        num /= 10; 
    }
    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}

//Al-Alaa Sunbul 1937595
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);

int main() {
    int count = 0;
    int number = 0;

    printf("The first 20 Armstrong numbers are:\n");

    while (count < 20) {
        int n = numDigits(number);
        int temp = number;
        int sum = 0;

        while (temp != 0) {
            int remainder = temp % 10;
            int count = n;

            while (count > 1) {
                remainder *= temp % 10;
                count--;
            }

            sum += remainder;
            temp = temp / 10;
        }

        if (sum == number) {
            printf("%d\n", number);
            count++;
        }

        number++;
    }

    return 0;
}

int numDigits(int input) {
    int count = 0;

    while (input > 0) {
        count++;
        input = input / 10;
    }

    return count;
}

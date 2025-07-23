#include <stdio.h>
int main() {
    printf("Hello, World!\n");

    //Calculate the sum of 3 numbers
    int a = 5, b = 10, c = 15;
    int sum = a + b + c;
    printf("The sum of %d, %d, and %d is: %d\n", a, b, c, sum);

    //calculate the percentage of 20% of 2000
    float total = 2000.0;
    float percentage = 0.20 * total;
    printf("20%% of %.2f is: %.2f\n", total, percentage);

    return 0;
}
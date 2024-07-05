#include <stdio.h>
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int areAmicableNumbers(int num1, int num2) {
    return (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1);
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (areAmicableNumbers(num1, num2)) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }

    return 0;
}


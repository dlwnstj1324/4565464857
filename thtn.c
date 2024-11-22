#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("소수를 판별할 숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d는 소수가 아닙니다.\n", num);
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d는 소수입니다.\n", num);
    else
        printf("%d는 소수가 아닙니다.\n", num);

    return 0;
}

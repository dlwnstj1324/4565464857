#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("두 수의 합: %d\n", sum);
    return 0;
}

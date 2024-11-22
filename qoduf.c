#include <stdio.h>

int main() {
    int n;

    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);

    int arr[n];
    printf("배열의 값을 입력하세요:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("배열에서 가장 큰 값: %d\n", max);
    return 0;
}

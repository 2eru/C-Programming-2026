#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1교시
    int n, korean = 90, math = 83;
    float average = (korean + math) / 2.0f;

    scanf("%d", &n);

    printf("Average: %10.1f\n", average);


    // 2교시
    int korean;
    scanf("%d", &korean);
    printf("Korean: %d\n", korean);

    return 0;
}
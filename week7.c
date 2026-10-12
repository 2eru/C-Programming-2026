#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    // 1번 과제

    // int num, sum = 0, cnt = 0;

    // for (int i = 0; i < 3; i++){
    //     if (num == -1) break;

    //     scanf("%d", &num);

    //     if (num < 0 || num > 100){
    //         i--;
    //     } else {
    //         sum += num;
    //         cnt++;
    //     }
    // }

    // if (cnt > 0) {
    //     printf("%d개, ", cnt);
    //     printf("평균 %.2f\n", (float)sum / cnt);
    // }



    // 2번 과제

    // int num, prev = 0;
    // int streak = 0, total = 0;

    // while (1) {
    //     scanf("%d", &num);
    //     total++;

    //     if (num == prev)
    //         streak++;
    //     else
    //         streak = 1;
    //     prev = num;

    //     if (streak == 3)
    //         break;
    // }

    // printf("%d, %d회\n", prev, total);



    // 3번 과제

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void print_bits(unsigned int num);

int main() {
    // 실습1
    int total = 7384;
    int hours;
    int minutes;
    int seconds;

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("시간: %d\n", hours);
    printf("분: %d\n", minutes);
    printf("초: %d\n", seconds);
    printf("\n");


    //실습2
    int score = 75;
    int attendance = 85;

    if (score >= 60 && attendance >= 80) {
        printf("합격\n");
    }
    else {
        printf("불합격\n");
    }
    printf("\n");


    //실습3
    int READ = 0x01;
    int WRITE = 0x02;
    int EXEC = 0x04;
    unsigned int permission = READ | WRITE;

    permission |= EXEC;

    print_bits(permission);

    return 0;
}

void print_bits(unsigned int n) {
    for (int i = 7; i >= 0; i--) {  // 8비트를 확인하기 위함이라 8비트 기준으로 반복
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) {  // 가독성을 위해 4비트마다 공백 추가
            printf(" ");
        }
    }
    printf("\n");
}
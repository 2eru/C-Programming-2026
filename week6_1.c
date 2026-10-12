#include <stdio.h>

void exerc() {
    int year, month;
    int days;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);
    printf("월을 입력하세요: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("1부터 12사이의 값을 입력하세요.\n");
        return;
    }

    switch (month) {
        case 2: {
            int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            days = is_leap ? 29 : 28;
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, days);
}

int main() {
    exerc();
    return 0;
}

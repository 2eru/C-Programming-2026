#include <stdio.h>

void exerc(){
    int month;
    int days;
    printf("월을 입력하세요: ");
    scanf("%d", &month);
    if(month < 1 || month > 12) {
        printf("1부터 12사이의 값을 입력하세요.\n"); 
        return;
    }

    switch (month) {
        case 2:
            days = 28; // 윤년은 고려하지 않음
            break;
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

    printf("%d월은 %d일까지 있습니다.\n", month, days);

    return;
}

int main(){
    exerc();
    return 0;
}
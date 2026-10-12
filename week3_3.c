#include <stdio.h>

int main(void) {
    // 윤년 과제
    int year;
    
    scanf("%d", &year);

    int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("%d\n", is_leap);
    printf("\n");


    // 성적가중평균 과제
    int midterm, final, assignment;
    scanf("%d %d %d", &midterm, &final, &assignment);

    double weighted_score = midterm * 0.3 + final * 0.4 + assignment * 0.3;

    printf("weighted_score = %.2f\n", weighted_score);
    printf("\n");


    // BMI 계산 과제
    double height, weight;
    scanf("%lf %lf", &height, &weight);

    double bmi = weight / (height * height);

    printf("bmi = %.2f\n", bmi);


    // 금액을 화폐 단위로 분해
    int amount;
    scanf("%d", &amount);

    int hundred_thousand = amount / 100000;
    amount %= 100000;
    int ten_thousand = amount / 10000;
    amount %= 10000;
    int thousand = amount / 1000;
    amount %= 1000;
    int hundred = amount / 100;
    amount %= 100;
    int ten = amount / 10;
    amount %= 10;
    int one = amount;

    printf("10만원: %d장\n", hundred_thousand);
    printf("1만원: %d장\n", ten_thousand);
    printf("1천원: %d장\n", thousand);
    printf("1백원: %d개\n", hundred);
    printf("1십원: %d개\n", ten);
    printf("1원: %d개\n", one);

    return 0;
}

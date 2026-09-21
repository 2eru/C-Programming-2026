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

    return 0;
}
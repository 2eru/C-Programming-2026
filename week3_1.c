#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc1();
void exerc2();
void exerc3();
double circle(double r);

int main() {
    exerc1();
    exerc2();
    exerc3();

    /*double r;

    printf("반지름을 입력하세요: ");
    scanf("%lf", &r);

    printf("원의 넓이: %.2f cm²\n", circle(r));*/

    return 0;
}

void exerc1() {
    double inch;

    printf("cm로 변환하고 싶은 inch를 입력하세요: ");
    scanf("%lf", &inch);

    printf("cm: %.2f cm\n", inch * 2.54);
    
    return;
}

void exerc2() {
    double f;

    printf("섭씨로 변환하고 싶은 화씨를 입력하세요: ");
    scanf("%lf", &f);

    printf("섭씨: %.2f ℃\n", (f - 32) / 1.8);
    
    return;
}

void exerc3() {
    double r;

    printf("반지름을 입력하세요: ");
    scanf("%lf", &r);

    printf("원의 넓이: %.2f cm²\n", circle(r));
    
    return;
}

double circle(double r) {
    return r * r * 3.14;
}
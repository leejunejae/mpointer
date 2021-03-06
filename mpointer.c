// leejunejae 오픈소스 이해와 실습 과제 4번
// IDE 연동 후 PUSH를 위한 주석 추가
// Commit 내용 "task4 주석 추가" 
#include <stdio.h>

void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func4(int**** p);

int main() {
    int i = 100;

    int *p, **dp, ***tp;

    p = &i;
    dp = &p;
    tp = &dp;
    
    func1(&i);
    printf("i = %d\n", i);

    func2(&p);
    printf("*p = %d\n", *p);

    func3(&dp);
    printf("**dp = %d\n", **dp);

    func4(&tp);
    printf("***tp = %d\n", ***tp);

    printf("i = %d\n", i);

    return 0;
}

void func1(int* p)
{
*p = *p+100;
}

void func2(int** p)
{
**p = **p+100;
}

void func3(int*** p)
{
***p = ***p+100;
}

void func4(int**** p)
{
****p = ****p+100;
}
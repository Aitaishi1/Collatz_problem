#include <stdio.h>

#define MAX_BIT 32

void display1(unsigned int x) {
    unsigned int bin[MAX_BIT]; /* ２進数格納用 */
    unsigned int n;
    unsigned int i;

    /* 第0桁から値を算出していく */
    n = 0;
    while (x > 0) {
        /* 剰余算で２進数の第n桁を算出 */
        bin[n] = x % 3;

        /* 除算で第n桁目を切り捨て */
        x = x / 3;

        /* 次の桁へ */
        n++;
    }

    /* 求めた２進数を表示 */
    for (i = 0; i < n; i++) {
        /* 第i桁を表示 */
        printf("%u", bin[n - 1 - i]);
    }

    return 0;
}

void display2(unsigned int x) {
    unsigned int bin[MAX_BIT]; /* ２進数格納用 */
    unsigned int n;
    unsigned int i;

    int copy = x;
    printf(" ( ");

    /* 第0桁から値を算出していく */
    n = 0;
    while (x > 0) {
        /* 剰余算で２進数の第n桁を算出 */
        bin[n] = x % 3;

        /* 除算で第n桁目を切り捨て */
        x = x / 3;

        /* 次の桁へ */
        n++;
    }

    /* 求めた２進数を表示 */
    for (i = 0; i < n; i++) {
        /* 第i桁を表示 */
        printf("%u", bin[n - 1 - i]);
    }
    printf(" + ");

    n = 0;
    copy = copy*2;
    while (copy > 0) {
        /* 剰余算で２進数の第n桁を算出 */
        bin[n] = copy % 2;

        /* 除算で第n桁目を切り捨て */
        copy = copy / 2;

        /* 次の桁へ */
        n++;
    }
    /* 求めた２進数を表示 */
    for (i = 0; i < n; i++) {
        /* 第i桁を表示 */
        printf("%u", bin[n - 1 - i]);
    }
    printf(" + 1 )");



    return 0;
}

int main(void){

    int num = 0;
    int check;

    printf("数値の入力：");
    scanf("%d",&num);
    display1(num);
    printf("\n");

    while(num!=1){
        if(num%2==0){
            num = num / 2;
            printf("%8d  ",num);
            display1(num);
            printf("\n");
        }
        else{
            check = num;
            num = num*3 + 1;
            printf("%8d  ",num);
            display1(num);
            printf("\n");
        }
    }
    printf("fin.");

    return 0;
}
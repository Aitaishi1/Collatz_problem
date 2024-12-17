#include <stdio.h>

#define MAX_BIT 32

void display1(unsigned int x) {
    unsigned int bin[MAX_BIT];
    unsigned int n;
    unsigned int i;

    n = 0;
    while (x > 0) {
        bin[n] = x % 2;
        x = x / 2;
        n++;
    }

    for (i = 0; i < n; i++) {
        printf("%u", bin[n - 1 - i]);
    }

    return 0;
}

void display2(unsigned int x) {
    unsigned int bin[MAX_BIT];
    unsigned int n;
    unsigned int i;

    int copy = x;
    printf(" ( ");

    n = 0;
    while (x > 0) {
        bin[n] = x % 2;
        x = x / 2;
        n++;
    }

    for (i = 0; i < n; i++) {
        printf("%u", bin[n - 1 - i]);
    }
    printf(" + ");

    n = 0;
    copy = copy*2;
    while (copy > 0) {
        bin[n] = copy % 2;
        copy = copy / 2;
        n++;
    }
    for (i = 0; i < n; i++) {
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
            display2(check);
            printf("\n");
        }
    }
    printf("fin.");

    return 0;
}
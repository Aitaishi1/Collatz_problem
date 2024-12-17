#include <stdio.h>

int main(void){

    int num = 0;

    printf("数値の入力：");
    scanf("%d",&num);
    printf("入力した数字は%d\n",num);

    while(num!=1){
        if(num%2==0){
            num = num / 2;
            printf("%8d  \n",num);
        }
        else{
            num = num*3 + 1;
            printf("%8d  \n",num);
        }
    }
    printf("fin.");

    return 0;
}
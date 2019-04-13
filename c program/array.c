#include<stdio.h>

int main()

{

    int i,j,h;
    int number [5];

    for(i=0;i<=4;i++){

        printf("enter your number:");
        scanf("%d",&number[i]);
    }
    h=number[0];
    for(j=1;j<=4;j++){

        if(h<number[j]){
            h=number[j];
        }
    }

    printf("\n\n\nthe highest number is:%d",h);

    return 0;

}

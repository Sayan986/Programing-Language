#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    

    if(a>b){
        printf("%d is the big number!",a);
    }
    else if(b>a){
        printf("%d is the big number!",b);
    }

}

//sometimes the dynamically memory is allocated is insufficience or more than required!
//realloc is used to allocate memory of new size from previous pointer and size!

#include <stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    int *ptr;
    ptr=(int*) malloc (a * sizeof(int));
    ptr[0]=1;
    printf("%d", ptr[0]);
    ptr=(int*) realloc (ptr ,10 * sizeof (int));
    return 0;
}
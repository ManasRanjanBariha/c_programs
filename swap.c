#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("before swaping the value of a=%d,b=%d");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapingthe value of a=%d,b=%d");
    return 0;
}

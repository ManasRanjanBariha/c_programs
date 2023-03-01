// swaping value of two varibale without using third variable
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5,b=7;
    printf("before swapping Value of a=%d and b=%d ",a,b);
    a=a+b;
    b=a-b;
    b=a-b;
    printf("\nAfter swapping Value of a=%d and b=%d ",a,b);
    return 0;
}

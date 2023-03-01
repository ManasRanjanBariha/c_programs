// find smallest number using conditional operator
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("smallest=%d",a<b?a:b);
    return 0;
}

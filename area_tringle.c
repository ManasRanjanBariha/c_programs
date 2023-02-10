// find area of tringle which three sides is inputed by user
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    float s, area;
    printf("Enter three sides of tringle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the tringle is %.2f",area);
    return 0;
}

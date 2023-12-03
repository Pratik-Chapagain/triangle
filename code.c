#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,s,A;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%d",A);
     return 0;
}
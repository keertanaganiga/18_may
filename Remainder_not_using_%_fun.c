#include<stdio.h>
int getremainder(int a,int b)
{
    return(a-b*(a/b));
}
int main()
{
    int a,b,rem;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    rem=getremainder(a,b);
    printf("Remainder is %d",rem);
    
}
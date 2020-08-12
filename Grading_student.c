
#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int i,j;
    int sum1=0;
    int sum=0;
    printf("Enter the value n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
        scanf("%d",&a[j]);
        sum1=sum1+a[j];
        sum=sum1/6;
        }   
    
    if(sum>=90)
    {
        printf("The grade is A\n");
    }
    else if(sum>=80)
    {
        printf("The grade is B\n");
    }
    else if(sum>=70)
    {
        printf("The grade is C\n");
    }
    else if(sum>=60)
    {
        printf("The grade is D\n");
    }
    else if(sum>=50)
    {
        printf("The grade is E\n");
    }
    else
    {
        printf("The grade is F\n");
    }
        }
    

return 0;
}
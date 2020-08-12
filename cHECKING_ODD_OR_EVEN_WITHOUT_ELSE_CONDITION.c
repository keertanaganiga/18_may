#include<stdio.h>
int main()
{
    int n;
    char* arr[2]={"EVEN","ODD"};
    printf("Enter the number:");
    scanf("%d",&n);
    printf("NUMBER IS %s",arr[n%2]);
}
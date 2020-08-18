'''
COMPARE 2 INTEGERS
Compare 2 integers

Write a program to relate 2 integers entered by the user as equal to, less than or greater than.

 

Input and Output Format:

Input consists of 2 integers.

Refer sample input and output for formatting specifications.

All text in bold corresponds to input and the rest corresponds to output.

 

Sample Input and Output 1:

Enter the first number

6

Enter the second number

8

6 is less than 8

 

Sample Input and Output 2:

Enter the first number

8

Enter the second number

6

8 is greater than 6

 

Sample Input and Output 3:

Enter the first number

8

Enter the second number

8

8 is equal to 8
'''

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(a<b)
    {
        printf("%d is less than %d",a,b);
        
    }
    else if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
}
'''
Given three numbers N, A and B. Find how integers in range from 1 to N are divisible by A or B.

Input:
Input contains three integers N, A and B separated by space.

Output:
Print total numbers of integers in range from 1 to N are divisible by A or B.

SAMPLE INPUT 
25 3 5

SAMPLE OUTPUT 
12
'''
N,A,B= map(int,input().split())
count=0
for i in range(1,N+1):
    if i%A==0 or i%B==0:
        count+=1
print(count)
        
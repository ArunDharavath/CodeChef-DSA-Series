# cook your dish here
import math as m

n = int(input())
for j in range(n):
    num = int(input())
    temp = 0
    l = int(m.floor(m.log10(num))+1)
    for i in range(l):
        temp = temp*10 + int(num%10);
        num = int(num/10);
    print(temp)
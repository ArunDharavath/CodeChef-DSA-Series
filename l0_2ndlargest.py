# cook your dish here
a= int(input())
b = int(input())
c = int(input())
if (a >= c and a <= b) or (a >= b and a <= c): print(a)
elif (b >= c and b <= a) or (b >= a and b <= c): print(b)
else: print(c)
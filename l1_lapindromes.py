# cook your dish here
num = int(input())
while num:
    s = input()
    
    if len(s)%2 == 0:
        s1 = sorted(s[:int(len(s)/2)])
        s2 = sorted(s[int(len(s)/2):])
    else:
        s1 = sorted(s[:int(len(s)/2)])
        s2 = sorted(s[int(len(s)/2) + 1:])

    
    if(s1 == s2):
        print("YES")
    else:
        print("NO")
   
    num -= 1
x, y = map(int, input().split())

l = []
for i in range(x,y+1):
    if(i%2 == 1):
        l.append(i)
    
for i in l: print(i, end= " ")
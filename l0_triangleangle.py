# cook your dish here
x, y, z = map(int, input().split())
print("YES" if x + y + z == 180 and x>0 and y>0 and z>0 else "NO")
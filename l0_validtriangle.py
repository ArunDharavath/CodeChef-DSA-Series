# cook your dish here
a, b, c = map(int, input().split())
print("YES" if a <= b + c and b <= a + c and c <= a + b else "NO")
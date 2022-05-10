a,m,d,n = map(int,input().split())

result = a
while n != 1:
    result = result*m+d
    n -= 1
print(result)
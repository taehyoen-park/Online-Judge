a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)
result = a*b*c/8/1024/1024
print(format(result,'.2f'),"MB")
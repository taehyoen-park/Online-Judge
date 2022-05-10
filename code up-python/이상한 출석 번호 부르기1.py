n = int(input())
a = input().split()
for i in range(n):
    a[i] = int(a[i])
b = []
for i in range(24):
    b.append(0)

for i in range(n):
    b[a[i]]+=1

for i in range(1,24):
    print(b[i],end=" ")

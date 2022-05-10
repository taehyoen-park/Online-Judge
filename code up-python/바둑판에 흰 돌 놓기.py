n = int(input())
d = []

for i in range(20):
    d.append([])
    for j in range(20):
        d[i].append(0)

for i in range(n):
    a,b = map(int,input().split())
    d[a][b] = 1

for i in range(1,20):
    for j in range(1,20):
        print(d[i][j],end=" ")
    print('')
a,b = map(int,input().split())
n = int(input())
g = []
for i in range(a+1):
    g.append([])
    for j in range(b+1):
        g[i].append(0)

for i in range(n):
    l,d,x,y = map(int,input().split())
    if d == 0:
        for j in range(l):
            g[x][y+j] = 1
    else:
        for j in range(l):
            g[x+j][y] = 1

for i in range(1,a+1):
    for j in range(1,b+1):
        print(g[i][j],end=" ")
    print()


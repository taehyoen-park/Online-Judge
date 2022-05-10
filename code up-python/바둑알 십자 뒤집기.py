d = []

for i in range(19):
    d.append([])
    d[i] = input().split()

for i in range(19):
    for j in range(19):
        d[i][j] = int(d[i][j])

n = int(input())
for i in range(n):
    x,y = map(int,input().split())
    for j in range(19):
        if j != y-1:
            d[x-1][j] = int(not d[x-1][j])
        if j != x-1:
            d[j][y-1] = int(not d[j][y-1])

for i in range(19):
    for j in range(19):
        print(d[i][j],end=" ")
    print()



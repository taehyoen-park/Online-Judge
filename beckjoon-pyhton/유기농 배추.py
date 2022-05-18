def BFS(check,x,y,n,m):
    check[x][y] = False
    q = [[x,y]]
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    while(len(q)):
        x = q[0][0]
        y = q[0][1]
        q.pop(0)
        for i in range(4):
            px = x + dx[i]
            py = y + dy[i]
            if 0 > px or px >= n or 0 > py or py >= m:
                continue

            if not check[px][py]:
                continue

            if check[px][py]:
                check[px][py] = False
                q.append([px,py])
    return 1
    

def main():
    T = int(input())
    for i in range(T):
        m,n,k = map(int,input().split())
        check = [[False]*(m+1) for _ in range(n+1)]
        for j in range(k):
            x,y = map(int,input().split())
            check[y][x] = True
        
        result = 0
        for k in range(n):
            for j in range(m):
                if check[k][j]:
                    result += BFS(check,k,j,n,m)
        print(result)
        check.clear()
        result = 0
    return

main()
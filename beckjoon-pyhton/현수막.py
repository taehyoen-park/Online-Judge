def BFS(check,x,y,m,n):
    check[x][y] = 0
    q = [[x,y]]
    dx = [1,-1,0,0,1,-1,1,-1]
    dy = [0,0,1,-1,1,-1,-1,1]
    while(len(q)):
        x = q[0][0]
        y = q[0][1]
        q.pop(0)
        for i in range(8):
            px = x + dx[i]
            py = y + dy[i]
            if 0 > px or px >= m or 0 > py or py >= n:
                continue
            if not check[px][py]:
                continue
            else:
                check[px][py] = 0
                q.append([px,py])
    return 1

def main():
    m,n = map(int,input().split())
    check = [[0]*n for _ in range(m)]
    for i in range(m):
        x = list(map(int,input().split()))
        check[i] = x
    
    count = 0
    for i in range(m):
        for j in range(n):
            if check[i][j]:
                count += BFS(check,i,j,m,n)
    print(count)
    return
main()
def DFS(graph,check,v):
    if v == 1: check[0] = True
    check[v] = True
    count = 1
    for i in range(len(graph[v])):
        if not check[graph[v][i]]:
            count += DFS(graph,check,graph[v][i])
        else : continue
    if check[0]:
        return count
    return 0

def compare(x,y):
    if x < y: return y
    else : return x

def main():
    v = int(input())
    e = int(input())
    
    graph = []
    check = []
    for i in range(v+1):
        graph.append([])
        check.append(False)
    
    for i in range(e):
        x,y = map(int,input().split())
        graph[x].append(y)
        graph[y].append(x)

    Max = -1
    result = 0
    for i in range(1,v+1):
        result = DFS(graph,check,i)
        Max = compare(Max,result)
        check = [0 for i in range(v+1)]
    print(Max-1)

main()
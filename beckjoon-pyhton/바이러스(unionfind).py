def getParent(parent,x):
    if parent[x] == x: return x
    else :
        parent[x] = getParent(parent,parent[x])
        return parent[x]

def unionParent(parent,a,b):
    x = getParent(parent,a)
    y = getParent(parent,b)
    if x < y: parent[y] = x
    else : parent[x] = y

def main():
    n = int(input())
    Edge = int(input())
    parent = []
    for i in range(n+1):
        parent.append(i)

    for i in range(Edge):
        x,y = map(int,input().split())
        unionParent(parent,x,y)
    
    for i in range(1,n+1):
        parent[i] = parent[parent[i]]

    count = 0
    for i in range(1,n+1):
        if parent[i] == 1:
            count += 1
        else:
            continue
    return count

print(main()-1)
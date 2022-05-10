maze = []
for i in range(10):
    maze.append([])
    maze[i] = input().split()

for i in range(10):
    for j in range(10):
        maze[i][j] = int(maze[i][j])

x = 1
i = 1
while i != 10:
    if maze[x][i] == 2 or (x == 8 and i == 8):
        maze[x][i] = 9
        break

    if maze[x][i] != 1:
        maze[x][i] = 9
        i+=1
    else:
        i -= 1
        j = x
        while j != 9:
            if maze[j][i+1] == 1 and maze[j+1][i] != 1:
                if maze[j][i] == 2:
                    x = j
                    break
                else:
                    maze[j][i] = 9
                    j+=1
            else:
                x = j
                break

for i in range(10):
    for j in range(10):
        print(maze[i][j],end=" ")
    print()
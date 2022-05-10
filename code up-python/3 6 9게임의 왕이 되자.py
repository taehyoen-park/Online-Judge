a = int(input())
for i in range(1,a+1):
    result = (i % 10) 
    if result % 3 == 0 and result != 0:
        print('X',end=' ')
    else:
        print(i,end=' ')
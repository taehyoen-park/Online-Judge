a = int(input())
result = 0
for i in range(1,a+1):
    if result >= a:
        break
    else:
        result += i
print(result)
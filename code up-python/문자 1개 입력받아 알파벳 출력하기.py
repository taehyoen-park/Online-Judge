a = input()
start = 'a'
while start != chr(ord(a)+1):
    print(start)
    start = chr(ord(start)+1)

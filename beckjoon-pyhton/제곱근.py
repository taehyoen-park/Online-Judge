n = int(input())

def binary_search(r, h):
    while r <= h:
        m = (r + h)//2
        if m**2 == n:
            return m

        elif m**2 > n:
            h = m

        else:
            r = m

print(binary_search(1, n))
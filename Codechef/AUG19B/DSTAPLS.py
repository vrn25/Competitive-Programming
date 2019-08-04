t = int(input())
while t > 0:
    n, k = input().split()
    n, k = int(n), int(k)
    if n % (k*k) == 0:
        print("YES")
    else:
        print("NO")
    t -= 1
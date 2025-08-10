n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
s = sum(a[i][i] + a[i][n-i-1] for i in range(n))
if n % 2:
    s -= a[n//2][n//2]
print(s)

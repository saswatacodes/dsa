r, c = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(r)]
zeros = sum(row.count(0) for row in a)
print("Yes" if zeros > (r*c)//2 else "No")

n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
a = list(zip(*a[::-1]))
for row in a:
    print(*row)

r, c = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(r)]
for row in zip(*a):
    print(*row)

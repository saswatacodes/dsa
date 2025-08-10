n = int(input())
arr = list(map(int, input().split()))
res = [x for x in arr if x != 0] + [0]*(arr.count(0))
print(*res)

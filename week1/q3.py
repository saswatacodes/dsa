n = int(input())
arr = list(map(int, input().split()))
first = second = -10**9
for x in arr:
    if x > first:
        second, first = first, x
    elif second < x < first:
        second = x
print(second)

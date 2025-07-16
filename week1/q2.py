n = int(input("Enter length:"))
arr = []
max = 0
for i in range(n):
    q = int(input())
    arr.append(q)
    if q > max:
        max = q
print("maximum is:"+str(max))

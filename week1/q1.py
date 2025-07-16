n = int(input("Enter size of array:"))
print("Enter elements:")
arr = []
for i in range(n):
    m = int(input())
    arr.append(m)
q = int(input("Enter new element:"))
arr.append(q)
print("Array after insertion is")
print(arr)

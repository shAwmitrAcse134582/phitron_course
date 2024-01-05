n, q = map(int, input().split())
ar = list(map(int, input().split()))

arr = [0] * n
arr[0] = ar[0]

for i in range(1, n):
    arr[i] = ar[i] + arr[i - 1]

for i in range(q):
    a, b = map(int, input().split())
    
    if a == 1:
        print(arr[b - 1])
    else:
        print(arr[b - 1] - arr[a - 2])
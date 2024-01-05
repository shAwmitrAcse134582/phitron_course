t = int(input())
ar = list(map(int, input().split()))
# print(ar)
ar2=ar.copy()
ar2.reverse()
if ar==ar2:
    print('YES')
else:
    print('NO')


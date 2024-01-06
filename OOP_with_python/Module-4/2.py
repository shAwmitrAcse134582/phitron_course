from collections import Counter
n=int(input())
ar = list(map(int, input().split()))
# print(ar)
arr2=dict(Counter(ar))
# print(arr2)
cnt=0

for key,value in arr2.items():
    if key>value:
        cnt+=value
    elif key<value:
            cnt+=abs(value-key)
print(cnt)
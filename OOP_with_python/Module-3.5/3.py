t=int(input())
ar=list(map(int,input().split()))
mx=ar.index(max(ar))
mn=ar.index(min(ar))
# print(mx)
tmp=ar[mx]
tmp2=ar[mn]
# print(ar)
# print(mx)
# print(mn)
ar[mx]=tmp2
ar[mn]=tmp
print(" ".join(map(str, ar)))

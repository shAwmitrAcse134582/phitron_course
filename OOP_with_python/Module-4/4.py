n=int(input())
ar = list(map(int, input().split()))
cnt=0
while 1:
    ok=True
    for i in range(n):
        if ar[i]%2==0:
            x=ar[i]/2
            ar[i]=x
        else:
            ok=False
            break
       
    if ok==True:
        cnt+=1
    else:
        break
print(cnt)

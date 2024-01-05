t=int(input())

for i in range(t):
    a,b=map(int,input().split())
    x=max(a,b)
    y=min(a,b)
    sum=0
    for j in range(y+1,x):
        if j%2!=0:
            sum+=j
    print(sum)

a,b=map(int,input().split())
sum=0
for i in range(2,b+1):
    if i%2==0:
        sum+=pow(a,i)
print(sum)
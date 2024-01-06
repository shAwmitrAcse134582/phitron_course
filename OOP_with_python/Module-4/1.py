s=input()
# print(s)
ar=[]
l=0
r=0
c=0
cnt=0
# print(s[0])
for i in range(len(s)):
    if(s[i]=='L'):
        l=l+1
    else:
        r=r+1
    cnt+=1
    if(l==r):
        ar.append(s[c:cnt])
        c=cnt
        l=0
        r=0
sz=len(ar)
print(sz)
for k in range(sz):
    print(ar[k])
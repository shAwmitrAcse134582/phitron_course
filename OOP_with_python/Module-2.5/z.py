k, s = map(int, input().split())
c = 0
for i in range(k+1):
    for j in range(k+1):
         v = s - i - j
         if(0 <=v and v<= k):
                    c += 1
print(c) 
                
# def fibo(n):
#     if n==0 or n==1:
#         return n
#     else:
#         return fibo(n-1)+fibo(n-2)

# n=int(input())
# for i in range(n):
#     print(fibo(i), end=" ")


n=int(input())
a=[0,1]
for i in range(2,n):
    a.append(a[i - 1] + a[i - 2])
    
for i in range(0,n):
    print(a[i], end=" ")


    

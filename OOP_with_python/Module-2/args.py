def func(*number):
    sum=0
    for n in number:
        print(n)
        sum+=n
    return sum

num=func(10,20,30,40,50)
print(num)
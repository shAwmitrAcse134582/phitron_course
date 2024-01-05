s=input()
# print(s)
ans = ' '.join(word[::-1] for word in s.split())
print(ans)
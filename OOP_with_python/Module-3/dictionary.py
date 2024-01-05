num=[1,2,3,4,5,6,7,8]
person={'name':'shawmitra','address':'Barishal','age':21}
print(person)
print(person['age'])
print(person.keys())
print(person.values())

# loop through dictionary
for key,value in person.items():
    print(key,value)

for i,n in enumerate(num):
    print(i,n)
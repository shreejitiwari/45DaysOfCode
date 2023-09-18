n = int(input())
temp = n
res = []

while (temp>0):
    num = int(input())
    fact = 1
    for i in range(2,num+1):
        fact *= i
    
    res.append(fact)
    temp -=1


for r in res:
    print(r)
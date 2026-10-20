n = int(input())

res = []

if(n % 2 == 1):
    n -= 3
    res.append(3)

while(n > 0):
    n-=2
    res.append(2)

print(len(res))
for i in res:
    print(i)



    
n = int(input())
sumn = n*(1 + n) // 2
s = 0

for i in range(n-1):
    val = int(input())
    s += val

print(sumn - s)
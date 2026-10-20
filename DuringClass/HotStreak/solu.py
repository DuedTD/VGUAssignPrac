n = int(input())

cnt = 0
res = -1

for i in range(n):
    temp = int(input())
    if(temp > 30):
        cnt += 1
        res = max(res, cnt)
    else:
        cnt = 0

print(f"Longest: {res}")
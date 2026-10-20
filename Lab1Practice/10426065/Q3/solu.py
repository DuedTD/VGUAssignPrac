seq = input()

cnt = 1
res = -1

for i in range(1, len(seq)):
    if(seq[i-1] != seq[i]):
        cnt = 1
    else:
        cnt+=1
    res = max(res, cnt)

print(res)
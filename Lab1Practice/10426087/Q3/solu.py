n = int(input())

cnt = 0
prev = None

for i in range(n):
    code = input()
    if(code != prev):
        cnt += 1
        prev = code

print(cnt)
    

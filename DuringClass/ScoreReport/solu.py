n = int(input())

cnt = 0
s = 0

for i in range(n):
    sc = int(input())
    if(sc >= 50): cnt+=1

    s += sc

print(f"Total: {s}, Passed: {cnt}, Average: {s/n:.2f}")
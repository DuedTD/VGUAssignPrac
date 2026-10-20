n = int(input())

diff = 1e9
res = [0,0]

x = 0
while(n >= 2*x):
    y = n - 2 * x
    v = abs(x - y)
    if(v < diff):
        diff = v
        res = [y,x]
    else:
        print(res[0],res[1])
        break
    x+=1
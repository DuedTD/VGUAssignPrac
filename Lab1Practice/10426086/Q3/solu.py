n = int(input())

cnt_o, cnt_e, oi, ei = 0,0,-1,-1

for i in range(1,n+1):
    val = int(input())
    if(val%2==0):
        cnt_e+=1
        ei = i
    else:
        cnt_o+=1
        oi = i

if(cnt_e == 1):
    print(ei)
else:
    print(oi)
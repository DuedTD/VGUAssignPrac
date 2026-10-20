cnt = 0
s = 0

while(True):
    val = input()
    try:
        if val == "stop":
            print(f"Count: {cnt}, Average: {(s/cnt):.2f}")
            break

        if(-20<=int(val) <= 80):
            s += int(val)
            cnt += 1
    except (ValueError,  ZeroDivisionError):
        print(f"Count: 0, No Data")
        break
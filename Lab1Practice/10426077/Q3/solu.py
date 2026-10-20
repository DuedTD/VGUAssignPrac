s = input()

sl = s.lower()
su = s.upper()

l, u = 0, 0

for i in range(len(s)):
    if(s[i] == sl[i]):
        l += 1
    else:
        u += 1

print(su if u > l else sl)

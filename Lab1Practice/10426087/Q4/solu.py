n = int(input())
m = int(input())
a = int(input())

x = n // a + (1 if n % a != 0 else 1)
y = m // a + (1 if m % a != 0 else 1)

print(x * y)

N = input()

reversed_N = N[::-1]
reversed_N = reversed_N.lstrip("0")

if N == reversed_N:
    print(reversed_N)
    print("YES")

if N != reversed_N:
    print(reversed_N)
    print("NO")
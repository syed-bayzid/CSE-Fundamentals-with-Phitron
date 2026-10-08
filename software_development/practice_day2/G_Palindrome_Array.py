N = int(input())
A = input().split()

reversed_A = A[::-1]


if A == reversed_A:
    print("YES")
else:
    print("NO")
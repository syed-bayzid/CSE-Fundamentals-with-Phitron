N = int(input())
A = input().split()

total = 0
for i in range(N):
    total += int(A[0][i])
print(total)
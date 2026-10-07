A, B = map(int, input().split())

found = False

for num in range(A, B + 1):
    lucky = True

    for digit in str(num):
        if digit != '4' and digit != '7':
            lucky = False
            break

    if lucky:
        print(num, end=" ")
        found = True

if not found:
    print(-1)   

# A, B = map(int, input().split())

# found = False

# for num in range(A, B + 1):
#     if all(digit in "47" for digit in str(num)):
#         print(num, end=" ")
#         found = True

# if not found:
#     print(-1)
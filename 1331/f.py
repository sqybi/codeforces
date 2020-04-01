a = set(('A', 'E', 'G', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U', 'V', 'W'))
b = set(('A', 'C', 'D', 'E', 'H', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'Y'))
b |= set(('J'))

s = input()

# flag = True
# for c in s:
#     if c not in a:
#         flag = False
#         break
# if flag:
#     print('YES')
# else:
#     print('NO')

flag = False
for c in s:
    if c not in b:
        flag = True
        break
if flag:
    print('YES')
else:
    print('NO')

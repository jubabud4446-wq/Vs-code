anton = 0
danik = 0


n = int(input())

for i in input():
    if i == 'A':
        anton += 1
    else:
        danik += 1

if anton > danik:
    print("Anton")
elif danik > anton:
    print("Danik")
else:
    print("Friendship")
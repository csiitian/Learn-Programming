n = int(input("Enter n :- "))
for i in range(n):
    for j in range(i+1):
        print(i+j+1, end='')
    print()
    
# Output :-
# Enter n :- 5
# 1
# 23
# 345
# 4567
# 56789
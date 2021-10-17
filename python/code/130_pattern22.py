n = int(input("Enter n :- "))
for i in range(n):
    for j in range(i):
        print(i-j+1, end='')
    for k in range(i+1):
        print(k+1, end='')
    print()
    
# Output :-
# Enter n :- 5
# 1
# 212
# 32123
# 4321234
# 543212345  
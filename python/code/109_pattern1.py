n = int(input("Enter n :- "))
for i in range(n):
    for j in range(i+1):
        print("*", end='')
    print()
    
# Output :-
# Enter n :- 5
# *
# **
# ***
# ****
# *****
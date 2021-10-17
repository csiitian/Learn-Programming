n = int(input("Enter n :- "))
for i in range(2*n):
    for k in range(1+min(i,2*n-i-1)):
        print("*", end='')
    print()
    
# Output :-
# Enter n :- 5
# *
# **
# ***
# ****
# *****
# *****
# ****
# ***
# **
# *
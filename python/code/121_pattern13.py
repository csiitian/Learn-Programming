n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n):
        if(i == 0 or i == n-1):
            print("*", end='')
        else:
            if(j == 0):
                print("*", end='')
    print()
    
# Output :-
# Enter n :- 5
# *****
# *
# *
# *
# *****
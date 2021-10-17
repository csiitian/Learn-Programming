n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n):
        if(i == 0 or i == n-1 or i == n//2):
            print("*", end='')
        else:
            if(i < n//2 and j == 0):
                print("*", end='')
            elif(i > n//2 and j == n-1):
                print("*", end='')
            else:
                print(" ", end='')
    print()
    
# Output :-
# Enter n :- 5
# *****
# *
# *****
#     *
# *****
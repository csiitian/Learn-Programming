n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n):
        if(j>(n//2-i) and j<(n//2+i)):
            print(" ", end='')
        else: 
            print("*", end='')
    print()
    
# Output :-
# Enter n :- 5
# *****
# ** **
# *   *
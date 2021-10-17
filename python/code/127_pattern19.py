n = int(input("Enter n :- "))
for i in range(n):
    for j in range(i+1):
        if(j%2 == 0):
            print("@", end='')
        else:
            print("#", end='')
    print()
    
# Output :-
# Enter n :- 5
# @
# @#
# @#@
# @#@#
# @#@#@
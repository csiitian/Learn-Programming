n = int(input("Enter n :- "))
for i in range(n):
    for j in range(i):
        print(" ", end='')
    for k in range(2*(n-i-1)):
        if(k == 0):
            print("*", end='')
        else:
            print(" ", end='')
    print("*")
    
# Output :-
# Enter n :- 5
# *       *
#  *     *
#   *   *
#    * *
#     *
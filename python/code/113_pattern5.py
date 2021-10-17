n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n-1,i,-1):
        print(" ", end='')
    for k in range(i+1):
        print("* ", end='')
    print()
    
# Output :-
# Enter n :- 5
#     *
#    * *
#   * * *
#  * * * *
# * * * * *    
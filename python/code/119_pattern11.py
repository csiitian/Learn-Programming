n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n-1,i,-1):
        print(" ", end='')
    for k in range(2*(i+1)):
        if(k == 0):
            print("/", end='')
        elif(k == 2*(i+1)-1):
            print("\\", end='')
        elif(n//2 == i):
            print("_", end='')
        else:
            print(" ", end='')
    print()
    
# Output :-
# Enter n :- 5
#     /\
#    /  \
#   /____\
#  /      \
# /        \
 
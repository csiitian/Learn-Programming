n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n-1,i,-1):
        print(" ", end='')
    print("/", end='')
    for k in range(2*i):
        if(k%2 == 0):
            print("/", end='');
        else:
            print("\\", end='');        
    print("\\")
    
# Output :-
# Enter n :- 5
#     /\
#    //\\
#   //\/\\
#  //\/\/\\
# //\/\/\/\\  
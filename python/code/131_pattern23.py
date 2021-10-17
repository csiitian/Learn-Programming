n = int(input("Enter n :- "))
for i in range(1,n+1):
    print((3*i-1)//2, end='')
    if(i%2 == 0):
        print((3*i+1)//2, end='')
    print()
    
# Output :-
# Enter n :- 5
# 1
# 23
# 4
# 56
# 7
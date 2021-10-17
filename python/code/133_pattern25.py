n = int(input("Enter n :- "))
for i in range(n):
    for j in range(n-1,i,-1):
        print(" ", end='')
    for j in range(2*i+1):
        print(min(j+1,2*i-j+1), end='')
    print()
    
# Output :-
# Enter n :- 5
#     1
#    121
#   12321
#  1234321
# 123454321
# print all odds and evens natural number upto n
n = int(input("Enter n :- "))

# even starting from 2 and step 2 every time
print("Even Numbers :-", end=' ')
for i in range(2,n+1,2):
    print(i, end=' ') 

# odd starting from 1 and step 2 every time
print("\nOdd Numbers :-", end=' ')
for i in range(1,n+1,2):
    print(i, end=' ') 


# Output :- 
# Enter n :- 8
# Even Numbers :- 2 4 6 8
# Odd Numbers :- 1 3 5 7
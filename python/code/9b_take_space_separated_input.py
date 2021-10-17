line_input = input("Enter Integer, Character and Floating Number :- ")
a, b, c  = line_input.split() # all input tokens are string
a = int(a) # cast string to int
c = float(c) # cast string to float
print("Input is :-", a, b, c)
# it will print all token space separated

# Output :-
# Enter Integer, Character and Floating Number :- 121 g 128.12
# Input is :- 121 g 128.12
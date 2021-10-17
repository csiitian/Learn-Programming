# You can store big values in python variable
# So let's see what are datatypes in python

a = 12 # Integer
b = False # Boolean
c = 3 + 4j # Complex
d = "Hello" # String
e = 96.20 # Float

f = [a, b, c, d] # List - Mutable ( can change )
g = (a, b, c, d) # Tuple - Immutable ( can't change )
h = {a: b, c: d, e: f} # Dictionary

print(a, type(a))
print(b, type(b))
print(c, type(c))
print(d, type(d))
print(e, type(e))
print(f, type(f))
print(g, type(g))
print(h, type(h))

# You can create custom datatypes 
# using class

# Output :-
# 12 <class 'int'>
# False <class 'bool'>
# (3+4j) <class 'complex'>
# Hello <class 'str'>
# 96.2 <class 'float'>
# [12, False, (3+4j), 'Hello'] <class 'list'>
# (12, False, (3+4j), 'Hello') <class 'tuple'>
# {12: False, (3+4j): 'Hello', 96.2: [12, False, (3+4j), 'Hello']} <class 'dict'>
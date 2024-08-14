#!/usr/bin/python3
str = "Python is an interpreted, interactive, object-oriented programming\
 language that combines remarkable power with very clear syntax"
str = str.split("interactive, ")[1].split(" language")[0] + str[-1]
print(str)

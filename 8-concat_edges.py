#!/usr/bin/python3
str = "Python is an interpreted, interactive, object-oriented programming\
 language that combines remarkable power with very clear syntax"
str = str.split("interactive, ")[1].split(" language")[0] + chr(10)
print(str)

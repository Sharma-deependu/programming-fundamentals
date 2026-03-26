txt = "hello world"

x= txt.upper()
print(x)

txt = "MY NAME IS DEEPENDU SHARMA"
x= txt.lower()
print (x)

#WHERE IN THE TEXT IS THE WORD WELCOME(will take the first letter of the word)

TXT = "WELCOME TO MY PYTHON PROGRAMMING WORLD"
X = TXT.index("TO")
print(X)

#where in the text is the first occurance of the letter "d"

txt = "I am Deependu Sharma, A first year B.tech undergraduate pursuing my Btech from USICT, Dwarka."

x = txt.index("S")
print(x)

a="""hy there , How are you 
I hope that you are doing fine and 
you will have a great day today.
"""
print(a)

a = "Hello World"
print(a[1])         #print a letter from the postion 1

a = "Deependusharma"
print(len(a))

txt = "Attribute Error"
print("hello" in txt)  #check if the word is present in the string or not.

#word slicing - Get the character from os import replace

from the positons 2 and 5 (5 not included).

b= "HEllO World . This is a program for word slicing."
print(b[2:6])

x=" HEllO World . This is a program for word slicing. "
print(x.strip("d")) #will delete all the spaces from the string from beginning or end.

#replace a letter from the string.

a= "Hello world"
print(a.replace("H", "D"))

a = "Deependu Sharma"

print(a.split(","))

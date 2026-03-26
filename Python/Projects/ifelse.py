#Write a program that checks if a given number is positive, negative, or zero.

x = (int (input("Enter An Integer ")))

if (x<0):
    print("Given Number is Negative")

    if (x>0):
        print("Given Number is positve")

    if (x == 0):
     print("Number entered is zero")

    else:
       print (x)



#Create a program that takes two numbers as input and outputs the larger number.
x = (int (input("Enter 1st Integer ")))
y = (int (input("Enter 2nd Integer ")))

if y>x:
   print("y is greater than x")

if x>y:
   print("x is greater than y")
else:
   print("Both the numbers are equal")

#Create a program that asks the user for their age and displays a message based on whether they are old enough to vote (considering the voting age is 18).
x = (int(input("Enter your age ")))
if x < 18:
    print("You are Not eligible to vote")

elif x > 18:
    print("You are eligible to vote")

else:
     print("you are eligible to vote")

#Create a program that prompts the user to enter their grade (A, B, C, D, or F) and outputs a message based on their grade. For example, if the grade is 'A', the program should display "Excellent!"

x = ((input("Enter your grade ")))

if x == "a":
    print("Excellent")
    
elif x == "b":
    print("keep it up")

elif x == "c":
    print("Good")

elif x == "d":
    print("Work Hard more")

elif x == "f":
    print("Better Luck Next time")

else:
    print(x)


#Create a program that asks the user to enter their age and gender, and then outputs a message based on the following conditions:
#If the age is greater than or equal to 18 and the gender is 'male', display "You are a man."
#If the age is greater than or equal to 18 and the gender is 'female', display "You are a woman."
#If the age is less than 18, display "You are a child."

x = (int(input("Enter your age ")))
y = (str(input("Enter your gender ")))

if x >= 18 and y == "male":
    print("You are a male with age greater than or equal to  18")

elif x >= 18 and y == "female":
    print("you are a female with age greater than or equal to  18")

elif x < 18:
    print("you are a child")
   

#Write a program that determines whether a given number is even or odd.


x = (int(input("Enter an number ")))

if (x % 2) == 0:
    print("The entered Number is even")

else:
    print("Given Number is odd")



# Create a program that calculates the final price of a product after applying a discount. The user should input the original price and the discount percentage. If the final price is greater than $100, display a message saying "Great deal!"
x = (int(input("Enter the price of product ")))
y = (int(input("discount percentage ")))

#formula for dicount %, 
_discount = x-y/ x * 100

print (_discount)
if (_discount > 100):
    print("GREAT DEAL!") 


# Explain the concept of method overriding in Python and provide an example with two classes that demonstrate method overriding.

class animals():
    def speak(self):
        pass

class Dogs(animals):
    def speak(self):
        return "woof!"

class Cats(animals):
    def speak(self):
        return "meow"
    
dog = Dogs()
cat = Cats()

print(dog.speak())
print(cat.speak())

# How can you achieve polymorphism in Python through method overloading? Provide an example with multiple methods in a class that have the same name but different parameters.

class calculator:
    def add(self,a,b=0):
        return a+b
    
calc = calculator()

result1 = calc.add(5)
result2 = calc.add(3,4)

print(result1)
print(result2)



# Create a base class Shape with a method area(). Then, create two subclasses, Circle and Rectangle, and override the area() method to calculate the area of each shape. Demonstrate polymorphism by creating objects of both subclasses and calling the area() method on them.

class shape:
    def area():
        pass

class Circle(shape):
    def area(r):
        return (3.14*r**2)
class Rectangle(shape):
    def area(a,b):
        return a * b
    
circle= Circle.area(5)
rectangle = Rectangle.area(24,10)

print("area of cirlce ",circle)
print("area of Rectangle ",rectangle)

# Write a Python function that takes a list of shapes (objects) and calculates the total area of all the shapes using polymorphism. Ensure that it works with any combination of shapes, not just circles and rectangles.

class Shape:
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

def total_area(shapes):
    total = 0
    for shape in shapes:
        total += shape.area()
    return total

shapes = [Circle(3), Rectangle(4, 5), Circle(2)]
total = total_area(shapes)
print("Total Area:", total)

class computec:
    x =5
a1 = computec()
print(a1.x)

class info:
    def __init__(self, name ,age):
        self.name = name
        self.age = age
a1 = info("Deependu",19)
print(a1.name)
print(a1.age)

class info:
    def __init__(self,name,age):
        self.name = name
        self.age = age
def __str__(self):
    return "{self.name}({self.age})"

a1 = info("Deependu", 19)
print(a1.age)

class info:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def myfunc(self):
          print("Hello my name is " + self.name)
a1 = info("Deependu",19)
a1.myfunc()


class info:
    def __init__(Deependu, name, age):
        Deependu.name = name
        Deependu.age = age 

def myfunc(abc):
    print("Hello my name is " + abc.name)

a1 = info("Ram",25)
a1.func()

a1.age

del a1.age
del a1



class info :
    def __init__(self,fname,lname):
        self.fname = fname
        self.lname = lname
    def printname(self):
        print(self.fname,self.lname)

# use the info class to create an object , and then execute the printname method:
x = info ("Deependu",19)
x.printname()


class student(info):
    pass

x= student("Deependu Sharma",19)
x.printname()


class student(info):
    def __init__(self, fname, lname):
     def info(self):
         x = info( "self.Deependu", "self.Sharma")
x.info()


class student(info):
    def __init__(self, fname, lname):
        super().__init__(fname, lname)
x.__init__()

class happy (info):
    def __init__(self, fname, lname):
        super().__init__(fname, lname)
        self.graduationyear = 2015


class happy (info):
     def __init__(self, fname, lname,year):
         super().__init__(fname, lname)
         self.graduationyear = year

x = happy("mike ", "olensen",2027)
print(x.fname,x.lname, x.year)


# add a method welcome to student class :
class student(info):
    def __init__(self, fname, lname,year):
        super().__init__(fname, lname)
        self.graduationyear = year
    def welcome(self):

x = welcome("Happy","Singh",2004)

print("welcome",self.fname,self.lname,"to the class of ",self.graduationyear)

a = student()

a.welcome()


class student():
    name = "Deependu"
    subject = "Electronics Engineer"

    def __init__(self):
        print("Deependu is pursing degree in electronic and communication engineering.")
    def _student_(self):
        print("{self.name},will become a good {self.subject}")

a= student()
a._student_


#difference between list and tuple is that we cannot make changes in a tuple like we can do in list. to make any change in a tuple we need to convert it into a list and then add something to it and again make it a tuple.

this_tuple = ("Deependu","Sharma")
print(this_tuple)

__thistuple = (1,2,34,54,34,87,90,1,34,67,8)

x= __thistuple.count(1)
y = __thistuple.count(34)
print(y)
print(x)

__thistuple = (1,2,34,54,34,87,90,1,34,67,8)

x= __thistuple.index(1)
print(x)

#if we want to print the last Number.

thistuple = ("yoyo","badshah", "ikka")
print(thistuple[-2])

this_tuple = ("Helsinki","nirobi","berlin","tokyo")
print(this_tuple[1:4])


singer_name_tuple = ("badshah","Honey singh","ikka","king","jaildar","happy raikoti","gippy gerwal","paradox","golu")

print(singer_name_tuple[2:])
singer_name_tuple = ("badshah","Honey singh","ikka","king","jaildar","happy raikoti","gippy gerwal","paradox","golu")

print(singer_name_tuple[:5])

singer_name_tuple = ("badshah","Honey singh","ikka","king","jaildar","happy raikoti","gippy gerwal","paradox",)
if "Honey singh" in singer_name_tuple:
 print("Yes Honey is present in this list.")
else:
 print("Oops !!, Check for Spellings and try again.")

#convert the tuple into list

singer_name_tuple = ("badshah","Honey singh","ikka","king","jaildar","happy raikoti","gippy gerwal","paradox",)
_list = list(singer_name_tuple)
_list[1] = "Golu"
singer_name_tuple = tuple(_list)
print(singer_name_tuple)


fruits_tuple = ("apple","mango", "banana","orange")
_list = list(fruits_tuple)
_list.append("jackfruit")
fruits_tuple = tuple(_list)
print(fruits_tuple)

x= ("Hy There,")
y = ("How are you?")
x+=y
print(x)

_this__tuple = ("yoyo","ikka","badshah")
_list = list(_this__tuple)
_list.remove("yoyo")
_this__tuple = tuple(_list)
print(_this__tuple)

_this__tuple = ("yoyo","ikka","badshah")
del _this__tuple
print(_this__tuple)


#unpacking a tuple
_carbrands = ("maruti","honda","ford","mercedes")
(maruti,honda,ford,mercedes)= _carbrands
print(maruti)
print(ford)
print(honda)
print(mercedes)

tuple1 = (1,2,3,4,5,6)
tuple2 = ("d","e","e","f","g","h")
tuple3 = tuple1 + tuple2
print(tuple3)

_this__tuple = ("yoyo","ikka","badshah")
_mul = _this__tuple * 2    #multiply the number of time a striing will occur.
print(_mul)

class person:
    name = "Deependu"
    Occupation = "Student"

    def __init__(self,name, occ):
        print("Hy there I am Writing Opps In python.")
        self.name = name
        self.occ = occ
    def info (self):
        print(f"{self.name} is a {self.occ}")
a = person("Deepu","Developer.")
b = person("Deependu","Student.")
c = person("Oneplus", "Mobile Company")
a.info()
b.info()
c.info()
# a.name = "Deepu"
# a.Occupation = "computec"
a.info()

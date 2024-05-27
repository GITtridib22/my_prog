class Student:
    def __init__(self,n,ag,c):
        
        self.name=n# self is nothing but the objects which are later created if works as a prototype for all objects
        self.age=ag
        self.city=c



s1=Student("Tridib",18,"Kolkata")

s2=Student("Soma",45,"Noida")

print("Name is : ",s1.name)
print("Age is : ",s1.age)
print("City is : ",s1.city)

print()# moves the cursor to the next line

print("Name is : ",s2.name)
print("Age is : ",s2.age)
print("City is : ",s2.city)
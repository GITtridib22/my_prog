# instance variable and instance method version 2.0
class Student:
    # this is constructor
    def __init__(self,n='noname',m=0):
        self.name=n
        self.marks=m

    # this is an instance method
    def display(self):
        print('Hi',self.name)
        print('Your Marks',self.marks)


s=Student() # constructor is called without any arguements
s.display()
print('-------------------------------------------------')

s=Student("Tridib",90) # constructor is called with arguements
s.display()
print('-------------------------------------------------')


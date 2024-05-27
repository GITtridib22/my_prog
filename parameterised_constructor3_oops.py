class Student:
    #below is a parameterized constructor
    def __init__(self,n,col):        self.name=n
        self.college=col

s1=Student(input("Enter 1st student :"))
print("Name of the student is :",s1.name)
print("Student is from :",s1.college)
print() # moves the cursor to the next line

s2=Student(input("Enter 2nd student :"))
print("Name of the student is :",s2.name)
print("Student is from :",s2.college)
print() # moves the cursor to the next line

s3=Student(input("Enter 3rd student :"))
print("Name of the student is :",s3.name)
print("Student is from :",s3.college)
print() # moves the cursor to the next line

s4=Student(input("Enter 4th student :"))
print("Name of the student is :",s4.name)
print("Student is from :",s4.college)
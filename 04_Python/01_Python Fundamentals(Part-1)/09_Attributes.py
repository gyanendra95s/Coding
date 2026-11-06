class Student:
    college_name="Shivalik College" # Class Attributes and can be invoke by class and as well as object also.
    PI=3.1

    def __init__(self,name,gpa):  #Instance Attributes and can be only invoke by object
        self.name=name
        self.gpa=gpa
        self.PI=3.14

stu1=Student("Gyan",9.2)

print(stu1.name) #Instance Attributes
print(stu1.college_name) # Class Attributes
print(Student.college_name) # Class Attributes

print(Student.PI) # Class Attributes=3.1
print(stu1.PI) # Class Attributes=3.14
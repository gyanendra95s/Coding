class Student:
    def __init__(self):
        print("Constructor is called")

stu1=Student()


# Parameterized Constructor

class Student:
    def __init__(self,name,cgpa):
        self.name=name
        self.cgpa=cgpa

stu1=Student("Rahul",8.0)
Stu2=Student("Gyan",8.08)
stu3=Student("Himanshu",7.01)

print(stu1.name,stu1.cgpa)
print(Stu2.name,Stu2.cgpa)
print(stu3.name,stu3.cgpa)
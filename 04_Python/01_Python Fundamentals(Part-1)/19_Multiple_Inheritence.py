#Multiple Inheritance

class Teacher:
    def __init__(self,salary):
        self.salary=salary

class Student:
    def __init__(self,gpa):
        self.gpa=gpa

class TA(Teacher,Student):
    def __init__(self,salary,gpa,name):
        Teacher.__init__(self,salary)
        Student.__init__(self,gpa)
        self.name=name

ta1=TA(15_0000,8.08,"Gyan")

print(ta1.name,ta1.gpa,ta1.salary)
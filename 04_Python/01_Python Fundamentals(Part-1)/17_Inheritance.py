class Employee:
    start_time="10am"
    end_time="6pm"

class Teacher(Employee):
    def __init__(self,subject):
        self.subject=subject

t1=Teacher("Math")
print(t1.subject,t1.end_time,t1.start_time) 
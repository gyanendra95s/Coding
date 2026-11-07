# Single UnderScore means Protected and can be also access in main Function
# _balance -> Protected


#  Double UnderScore means ANY Attributes are in Private
#  __balance -> Private

class BankAccount:
    def __init__(self,name,balance):
        self.name=name #Public
        self.__balance=balance #Private 

    def get_balance(self): #getter
        return self.__balance  # Private in main Function can be accessed by getter and setter Function

acc1=BankAccount("Gyan",5000)
print(acc1.name,acc1.get_balance())
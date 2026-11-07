class Laptop:
    storage_type="ssd"

    def __init__(self,RAM,storage):
        self.RAM=RAM
        self.storage=storage

    #Class Method
    @classmethod
    def get_storage_type(cls):
        print(f"storage type={cls.storage_type}")

    #Instance Method
    def get_info(self):
        print(f"laptop has {self.RAM} RAM & {self.storage} {self.storage_type} ")

    @staticmethod
    def cal_discount(price,discount):
        final_price=price-(discount*price/100)
        print(f"discounted price={final_price}")

l1=Laptop("16gb","512gb")

l1.cal_discount(40_000,10)
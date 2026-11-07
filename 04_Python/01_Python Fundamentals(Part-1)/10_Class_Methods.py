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

l1=Laptop("16gb","512gb")

l1.get_storage_type()


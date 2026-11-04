light=input("light:")
if(light=="red"):
    print("Stop")
elif(light=="yellow"):
    print("Move Slowly")
elif(light=="green"):
    print("Move")
else:
    print("Wrong Light")   



username=input("Enter the username:")
password=input("Enter the password:")

if(username=="admin" and password=="pass"):
    print("Login Successfully!")
elif(username!="admin"):
    print("Wrong Username")
else:
    print("Wrong Password")
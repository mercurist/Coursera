rawstr = input("Enter a positive number :")
try:
    num = int(rawstr)
except:
    num = -1

if num > 0:
    print("Positive")
else:
    print("Dont mess around")

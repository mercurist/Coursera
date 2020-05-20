fruit = "banana"

if "n" in fruit:
    print("n is present")
if "ban" in fruit:
    print("ban is present")
if "banx" not in fruit:
    print("banx is absent")


def check_order(name, another_one):
    if name < another_one:
        print(name, "comes before", another_one)
    else:
        print(name, "comes after", another_one)


name = "aditya"
another_one = "krishna"
check_order(name, another_one)

name = "aditya"
another_one = "Aditya"
check_order(name, another_one)

another_one = "aDitya"
check_order(name, another_one)

name = "Aditya"
another_one = "krishna"
check_order(name, another_one)

name = "Aditya"
another_one = "Krishna"
check_order(name, another_one)

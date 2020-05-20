li = [11, 22, 5, 16, 8, 10, 9]
smallest = None

for i in li:
    if smallest is None:
        smallest = i
    elif i < smallest:
        smallest = i

print(smallest)

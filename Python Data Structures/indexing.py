fruit = "banana"
print(fruit[0])

x = 3
print(fruit[x - 1])
# the built-in len() function gives us the length of the string
print(len(fruit))

try:
    print(fruit[1000])
except:
    print("dont mess around")

index = 0
while index < len(fruit):
    print(index, fruit[index])
    index = index + 1

# the iteration variable is completely taken care of by the for loop
# a definite loop for traversing strings is much more elegant
for letter in fruit:
    print(letter)

count = 0
for letter in fruit:
    if letter == "a":
        count = count + 1

print(count)


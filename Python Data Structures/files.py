phrase = open("2_Data Structures/resources/archangel.txt", "r")

"""
count = 0
for line in phrase:
    if line.startswith("and"):
        print(line, end="")
    count = count + 1
"""

count = 0
for line in phrase:
    if line.startswith("and"):
        line = line.rstrip()
        print(line)
    count = count + 1

print("\nno of lines = " + str(count))


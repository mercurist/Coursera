request = input("enter query : ")
print(request.startswith("Please"))

metadata = "From 10planeten@gmail.com Tuesday 2250 IST"
at_position = metadata.find("@")
final_Position = metadata.find(" ", at_position)

host = metadata[at_position + 1 : final_Position]
print(host)

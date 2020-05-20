abc = "livin la vida loca"
words = abc.split()
print(words)
abc = "livin;la;vida;loca"
words = abc.split()
print(words)
words = abc.split(';')
print(words)

message = "a lot            of spaces"
words = message.split()
print(words)

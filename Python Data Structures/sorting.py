collection = {"a": 1, "b": 22, "c": 10, "d": 15}

temp_collection = dict()

for k, v in collection.items():
    temp_collection[v] = k

print(sorted(temp_collection.items(), reverse=True))

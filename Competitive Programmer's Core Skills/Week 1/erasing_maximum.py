n = int(input())

entry = input()
nums = entry.split()
for i in range(n):
    nums[i] = int(nums[i])

max = None
for i in range(n):
    if max is None or nums[i] > max:
        max = nums[i]

count = 0

for i in range(n):
    if nums[i] == max:
        count += 1

if count == 1:
    for i in range(n):
        if nums[i] != max:
            print(nums[i], end=" ")
else:
    temp_count = 0
    for i in range(n):
        if nums[i] == max:
            temp_count += 1
            if temp_count == 3:
                continue
        print(nums[i], end=" ")

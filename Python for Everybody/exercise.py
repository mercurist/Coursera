hours = input()
rate_per_hour = input()

try:
    hours = float(hours)
    rate_per_hour = float(rate_per_hour)

except:
    print("enter numeric values")
    quit()

result = 0
if hours <= 40:
    result = hours * rate_per_hour
else:
    result = (40 * rate_per_hour) + ((hours - 40) * rate_per_hour * 1.5)

print(result)

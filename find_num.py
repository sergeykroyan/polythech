# creating list with inputted numbers
nums = input().split(", ")

# length calculation
n = len(nums) + 1

# sum of an arithmetic progression
total = (1 + n) * n // 2

# changing the type of list values to integer
a = sum(map(lambda x: int(x), nums))

# subtraction
print(total - a)

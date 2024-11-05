import re
nums = [int(num) for num in re.findall(r'\d+', input())]
print(sum(nums))

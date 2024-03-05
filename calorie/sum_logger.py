import re
try:
    with open( "input.in", 'r') as file:
        data = file.readline()
except FileNotFoundError:
    print(f"Error: {file_name} not found.")

nums = [int(num) for num in re.findall(r'\d+', data)]
print(sum(nums))

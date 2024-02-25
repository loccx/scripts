word = input('insert string\n')
letterCount = len(word)
print('# of letters in word:', letterCount)

counter = {}

for char in word:
    if char not in counter:
        counter[char] = 0
    counter[char] += 1

for entry in counter:
    if counter[entry] >= 1:
        print(entry, ':', counter[entry])

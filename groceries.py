people = {}

while True:
    item = input('item price: (type "na" to quit the program)\n')
    if item == 'na':
        break
    item = float(item)
    owners = []
    while True:
        owner = input('Who bought this? (type "na" if all owners are listed)\n')
        if owner == 'na':
            break
        owners.append(owner)
    numberOfPeople = len(owners)
    for person in owners:
        if person in people:
            people[person] += item / numberOfPeople
        else:
            people[person] = item / numberOfPeople

tax = float(input('How much tax?\n'))
totalNumPeople = len(people)
for person in people:
    people[person] += tax / totalNumPeople
    people[person] = round(people[person], 2)

print(people)

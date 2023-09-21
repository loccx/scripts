from datetime import date
from comp import Person

database = {}

print('| WELCOME TO YOUR NAME DATABASE |')
print('\"WHAT CAN I DO YOU FOR?\"')
print(' \'l\': to view all names')
print(' \'a\': to add a new name')

date = str(date.today()).split('-')
month = date[1]
year = date[0]
day = date[2]
key = month+day+year
#print(key)

# user command
query = input()

# adds new person
if query == 'a':
    name = input('name:\n')
    major = input('major:\n')

    # creates new person object
    newPerson = Person(name, major)

    for dates in database:
        
    if not database[key]:
        database[key] = {newPerson}
    elif database[key]:
        database[key][newPerson] = [1, 2, 3]

    if newPerson not in database[key]:

    database[key] = 

if today not in database:
    database[today] = {}

database_today = database[today]

#p1 = Person('key', 'data')
#print(p1.getName())

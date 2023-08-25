from datetime import date

database = {}

print('| WELCOME TO YOUR NAME DATABASE |')
print('\"WHAT CAN I DO YOU FOR?\"')
print(' \'l\': to view all names')
print(' \'a\': to add a new name')

today = date.today()
print(today)

if today not in database:
    database[today] = {}

database_today = database[today]

database=

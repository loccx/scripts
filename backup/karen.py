hours = int(input('Enter # of hours:\n'))
minutes = int(input('Enter # of minutes:\n'))
seconds = int(input('Enter # of seconds:\n'))

# Assuming this is military time, midnight is at 24 hours
remaining_seconds = 60 - seconds
remaining_minutes = 60 - minutes
remaining_hours = 24 - hours

if remaining_seconds == 60:
    remaining_seconds = 0
    remaining_minutes += 1

if remaining_minutes == 60:
    remaining_minutes = 0
    remaining_hours += 1

if remaining_seconds > 0:
    remaining_minutes -= 1
if remaining_minutes > 0:
    remaining_hours -= 1

print('It will be midnight in', remaining_hours*3600 + remaining_minutes*60 + remaining_seconds, 'seconds')

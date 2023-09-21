grade = 0
total_weight = 0
while (True):
    inp = float(input('Enter score as fraction (\'n\' to stop)'))
    if (inp == 'idk' or inp == 'n'):
        break
    weight = float(input('weight? (as a percentage)'))
    grade += inp * (weight / 100)
    total_weight += (weight / 100)

if abs(total_weight - 100) < 0.1:
    print(grade)
else:
    leftover_weight = 100 - total_weight
    print('leftover weight:', leftover_weight)
    currGrade = input('what is your current overall final grade? (in percentage form)')
    print('final exam grade:', (currGrade / 100 - grade) / leftover_weight)

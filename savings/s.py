import random

file = open("savings.txt", "r")
savings = float(file.readline())
history = file.read().split()
file.close()

print("\nHello Key! Welcome to SAVINGS FROM NOT BUYING UNNECESSARY STUFF :3") 
if (len(history) == 0):
    print("You have not saved money from omitting purchases yet! Resist the urge and start saving ;)\n")
elif (len(history) == 1):
    print("A second saving? Let's keep the ball rolling :D\n")
else:
    c1 = random.randint(0, 10)
    if c1 == 0:
        print("You have $" + str(savings) + " saved! Very impressive ;)\n")
    elif c1 == 1:
        print("You have $" + str(savings) + " saved! What a cool kid. Keep going!\n")
    elif c1 == 2:
        print("You have $" + str(savings) + " saved! Your bank account thanks you.\n")
    elif c1 == 3:
        print("You have $" + str(savings) + " saved! Quite impressive.\n")
    elif c1 == 4:
        print("You have $" + str(savings) + " saved! How admirable.\n")
    elif c1 == 5:
        print("You have $" + str(savings) + " saved! Sugar levels doing great!\n")
    elif c1 == 6:
        print("You have $" + str(savings) + " saved! I like the tenacity.\n")
    elif c1 == 7:
        print("You have $" + str(savings) + " saved! I love money.\n")
    elif c1 == 8:
        print("You have $" + str(savings) + " saved! lezgo gang\n")
    elif c1 == 9:
        print("You have $" + str(savings) + " saved! Don't forget to put this into your RothIRA!\n")
    elif c1 == 10:
        print("You have $" + str(savings) + " saved! Boba aint even good fr \n")
    elif c1 == 11:
        print("You have $" + str(savings) + " saved! Ay, yuh, ay, yuh\n")

done = 0
while(done == 0):
    command = input("What else can I do for you?\n \"a: add\"   \"d: delete\"   \"v: view progress\"    \"q: quit\"\n") #selecting command
    if command == 'a':
        deposit = input("\nCongratulations Key! How much did you save? (\"b\" to go back)\n")
        if deposit == 'b':
            print("\n")
            continue
        savings += float(deposit)
        history.append(deposit)
        print("\nYour entry has been submitted :)\n")
    elif command == 'd':
        pass
    elif command == 'v': # view entries
        print("\nYour savings to date:")
        print("------------------------------")
        for i in history:
            print(i)
        print("Total: $" + str(savings) + "!\n")
    elif command == 'q': # quit program
        done = 1
        print("------------------------------")
        print("\nA pleasure seeing you as always. Have a great day and see you next time! <3\n")
    elif command == 'fuck you':
        print("\n That's not nice :(\n")
    else:
        print("\nI'm not sure what you mean...\n")

#update new file
editedFile = open("savings.txt", "w")
editedFile.write(str(savings)+'\n')
historyString = ''
for k in history:
    historyString += (str(k)+'\n')
editedFile.write(historyString)
editedFile.close()

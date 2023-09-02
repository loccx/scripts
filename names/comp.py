import os

'''
Stores objects:
    Person
'''

class Person:
    # initializes person object
    # name
    # major
    # creates text file for the person created in the note directory
    def __init__(self, name, major = None):
        self.name = name
        self.major = major
        self.create_note()

    # returns the name ofthe person
    def getName(self):
        return self.name

    # creates the note within the notes directory for the person
    # names the note as the name of the person
    def create_note(self):
        # directory
        dir_name = 'note'
        if not os.path.exists(dir_name):
            os.makedirs(dir_name)
        # file
        file_name = os.path.join(dir_name, f'{self.name.lower()}.txt')
        with open(file_name, 'w') as file:
            file.write(self.name)


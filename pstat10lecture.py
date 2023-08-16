'''
Goal:
When running script, asks what # lecture we are on, then opens RStudio and creates new lecture file, then self closes all related files
'''

import pyautogui
import datetime

lecture_num = input('What # lecture is it?\n')

# opens spotlight search
pyautogui.hotkey('command', 'space')
pyautogui.PAUSE = 1

# opens rstudio
pyautogui.hotkey('r', 's', 'enter')
pyautogui.PAUSE = 4

# creates new file
pyautogui.hotkey('command', 'shift', 'n')
pyautogui.PAUSE = 0.5

# saves new file
pyautogui.hotkey('command', 's')

current_time = datetime.datetime.now()
month = str(current_time.month) if int(current_time.month) >= 10 else '0' + str(current_time.month)
day = str(current_time.day) if int(current_time.day) >= 10 else '0' + str(current_time.day)
year = str(current_time.year)[2:]

formatted = 'Lecture' + str(lecture_num) + '_' + month+day+year
pyautogui.typewrite(formatted, interval = 0.01)
pyautogui.PAUSE = 0.4
pyautogui.hotkey('command', 'tab')
pyautogui.PAUSE = 0.3
pyautogui.hotkey('command', 'q', 'enter')

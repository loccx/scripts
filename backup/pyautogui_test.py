import pyautogui

'''
pyautogui.hotkey('command', 'n')
pyautogui.typewrite('vim bitch.txt', interval = 0.02)
pyautogui.hotkey('enter')

pyautogui.hotkey('i')
pyautogui.typewrite('sup bitch\n', interval=0.03)
pyautogui.hotkey('j','k','space','x')

pyautogui.hotkey('command', 'tab')
pyautogui.PAUSE = 2
pyautogui.hotkey('command', 'ctrl', 'f')
'''
import datetime

current_time = datetime.datetime.now()
print("Time now at greenwich meridian is:", current_time)

import pyautogui
from time import sleep
sleep(5)
for i in range(0,5):
    pyautogui.write('Hello World!', interval=0.10)
    pyautogui.press('Enter')

'''
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
'''
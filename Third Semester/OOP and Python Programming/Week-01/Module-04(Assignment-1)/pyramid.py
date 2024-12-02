import pyautogui
from time import sleep
sleep(5)
n = int(input())
for i in range(n+1):
    pyautogui.write(i * '*', interval=0.25)
    pyautogui.press('Enter')


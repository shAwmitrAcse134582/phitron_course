import pyautogui
x =int(input())
for i in range(x):
    for j in range(i+1):
        pyautogui.write("#", interval=0.25)
    pyautogui.press('enter')









import serial
import win32api, win32con

arduinoData = serial.Serial('com4', 9600)

VK_CODE = {'v':0x56,
		   'c':0x43 ,
           'spacebar':0x20}

def press(x):
    win32api.keybd_event(VK_CODE[x], 0,0,0)
    win32api.keybd_event(VK_CODE[x],0 ,win32con.KEYEVENTF_KEYUP ,0)

def play():
    myData = (arduinoData.readline().strip())
    signal = (myData.decode('utf-8'))
    if signal == '1':
        press("v")
    elif signal == '2':
        press("c")
    elif signal == '3':
        press("spacebar")
    elif signal == '4':
        None
    else:
        None
while True:
    play()
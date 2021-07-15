import serial, time
from flask import Flask
import json

ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
print("통신시작")
while True:
    data = ser.readline().decode("utf-8")
    try:
        if (data != ""):
            desk = []
            _ = data.split('/')
            desk.append(_[0])
            desk.append(_[2])
            open('temp','w').write(json.dumps(desk))
    except:
        pass
    time.sleep(1)
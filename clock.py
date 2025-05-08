import serial
import time
from datetime import datetime

arduino = serial.Serial('COM9', 9600)
time.sleep(2)

while True:
    now = datetime.now()
    current_time = now.strftime("%H:%M:%S")
    
    arduino.write((current_time + '\n').encode())
    
    time.sleep(1) 

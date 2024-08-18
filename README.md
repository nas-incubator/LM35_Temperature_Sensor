This project demonstrates how to use the LM35 temperature sensor with an Arduino board. 
The sensor reads the ambient temperature, and an LED connected to pin 13 of the Arduino lights up when the temperature exceeds a predefined threshold.

*Components Required
  Arduino Uno (or any compatible board)
  LM35 Temperature Sensor
  LED Module
  Jumper wires

*Circuit Diagram
  LM35 Temperature Sensor:
    VCC pin to Arduino 5V
    GND pin to Arduino GND
    OUT pin to Arduino A0 (Analog Pin)
  LED:
      GND to Arduino GND
      LED1 to Arduino Pin 13

*How It Works
  The LM35 temperature sensor outputs an analog signal proportional to the temperature. The Arduino reads this analog value on pin A0 and converts it to a temperature value in Celsius.
  If the temperature exceeds 30°C, the LED on pin 13 lights up, providing a visual indicator of high temperature.

*Uploading the Code
  1. Connect your Arduino: Use the USB cable to connect your Arduino board to your computer.
  2. Select your board and port: In the Arduino IDE, go to Tools > Board and select your Arduino board. Then, go to Tools > Port and select the correct port for your Arduino.
  3. Upload the code: Click the upload button (right arrow) in the Arduino IDE to compile and upload the code to your Arduino board.

*Contributing
  If you would like to contribute to this project, feel free to fork the repository and submit a pull request. Contributions are welcome!

*Contact
  For any questions or suggestions, please feel free to open an issue or contact me at nasincubator@gmail.com.com or whatsapp us at +91 95990 63468/ 8920562814

By following these instructions, you should be able to successfully read the temperature value in real time. Happy coding!

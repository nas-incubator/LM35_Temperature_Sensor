// Define the pins
const int LM35Pin = A0;  // LM35 output connected to analog pin A0
const int LEDPin = 13;   // LED connected to digital pin 13

// Define the temperature threshold (in Celsius)
const float temperatureThreshold = 30.0;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Set the LED pin as an output
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // Read the analog value from the LM35 sensor
  int analogValue = analogRead(LM35Pin);
  
  // Convert the analog value to a voltage (assuming 5V reference voltage)
  float voltage = analogValue * (5.0 / 1023.0);
  
  // Convert the voltage to temperature in Celsius
  float temperatureC = voltage * 100.0;
  
  // Print the temperature to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  // Check if the temperature exceeds the threshold
  if (temperatureC > temperatureThreshold) {
    // Turn on the LED
    digitalWrite(LEDPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(LEDPin, LOW);
  }
  
  // Wait for a second before the next reading
  delay(1000);
}

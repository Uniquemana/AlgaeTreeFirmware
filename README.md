This README provides an overview of the code written by Kristians Abolins on 30.05.2023. The code is designed to control and monitor an Algae Tree system using an Arduino board, various sensors, and peripherals.

Software and Hardware Versions
Software version: 2.1.3

Updates:
    Data transfer between Mega and ESP32
    New UI layout
    Right heater PWM set to 80
    Right water temperature set to 40°C
    Hardware version: 1.2.0

Updates:
    ESP32 data transfer
    Heater temperature sensor on connectors

Notes:
    Daylight rhythm is temporarily disabled.
    Heater maximum output is limited to 50°C at 40 PWM.
    Warning is enabled when the temperature is below zero or higher than 80°C for each tower.

Pin Configuration:
    LEFT_HEATER_T: Analog pin (A0)
    LEFT_WATER_T: Digital pin (24)
    LEFT_HEATER_PWM: PWM pin (3)
    RIGHT_HEATER_T: Analog pin (A1)
    RIGHT_WATER_T: Digital pin (25)
    RIGHT_HEATER_PWM: PWM pin (4)
    TOWER_LED_PWM: PWM pin for both tower LEDs (6)
    LED: PWM pin (2)
    DHTPIN: DHT11 data pin connected to Arduino pin 7
    TFT_CS: TFT control pin (9)
    TFT_DC: TFT control pin (10)
    TFT_SCLK: TFT control pin (13)
    TFT_MOSI: TFT control pin (11)
    DHTTYPE: DHT11 sensor type
    YELLOW: Yellow LED pin (35)
    RED: Red LED pin (37)
    GREEN: Green LED pin (39)
    REALTIMECLOCK: Real-time clock pin (49)
    RXp2: ESP32 communication pin (17)
    TXp2: ESP32 communication pin (16)

Libraries Used:
    Wire.h
    Adafruit_SCD30.h
    Adafruit_ST7735.h
    Adafruit_GFX.h
    Fonts/FreeSans9pt7b.h
    Fonts/FreeMono9pt7b.h
    SPI.h
    stdio.h
    DHT.h
    SD.h
    OneWire.h
    DallasTemperature.h
    ThreeWire.h
    RtcDS1302.h
    bitmaps.h
    Fonts/FreeSansBold24pt7b.h
    Fonts/FreeSansBold9pt7b.h
    ArduinoJson.h
    SoftwareSerial.h
    TimerOne.h
    
Please ensure that these libraries are installed in your Arduino IDE for successful compilation and execution of the code.
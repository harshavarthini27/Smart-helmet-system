# Smart-helmet-system
The Smart Helmet Safety System is an embedded hardware project designed to improve motorcycle safety. It serves as a comprehensive safety ecosystem for two-wheeler riders by integrating sensor data to control ignition based on rider compliance.

Key Functionalities:
1.Intoxication Detection: The system utilizes an MQ3 alcohol sensor to monitor air quality, and if alcohol levels exceed a predefined threshold, the vehicle ignition is automatically disabled.
2.Rider Presence Verification: An infrared (IR) sensor confirms the rider's presence, ensuring safety parameters are verified before ignition.
3.Integrated Control: The project employs a transmitter and receiver architecture to provide a wireless link between the sensors and the ignition control relay.

Technical Specifications:
1.Core Controller: Arduino Nano.
2.Primary Sensors: MQ3 Gas Sensor for alcohol detection and an IR Sensor for presence detection.
3.Hardware Architecture: A modular transmitter and receiver setup for wireless interaction.

# Paper-Based Sensors for Human Health and Environment Tracking

This repository contains code and documentation for developing various paper-based sensors using graphite and implementing them into a health and environment tracking system. The sensors include strain sensors, capacitive touch sensors, and proximity sensors, all programmed using an ESP32 microcontroller.

## Project Overview

Most modern electronics opt for miniaturization, and flexible electronics are a key aspect of this trend. This project explores the creation of several paper-based sensors, including strain sensors and capacitive touch sensors, primarily made of graphite. These sensors are used to develop a health tracker that alerts users to potential health risks.

### Key Features
- **Strain Sensor**: Measures force by detecting changes in electrical resistance.
- **Capacitive Touch Sensor**: Detects touch based on changes in capacitance.
- **Capacitive Proximity Sensor**: Senses proximity through capacitance changes.
- **Grove Temperature & Humidity Sensor**: Provides temperature and humidity readings.
- **Resistive Switch**: Acts as a multi-stage toggle switch.

## Files in this Repository

- **variableres.ino**: Code for the variable resistor switch.
- **capacitiveTouchSensor.ino**: Code for the capacitive touch sensor.
- **DHTtester.ino**: Code for the temperature and humidity sensor.
- **proximity.ino**: Code for the capacitive proximity sensor.
- **StrainSen.ino**: Code for the strain sensor.
- **LICENSE**: License information for this repository.
- **Mini Project Paper (Report) - Group 12.pdf**: Detailed project report and methodology.

## Getting Started

### Prerequisites
- ESP32 microcontroller
- Graphite pencils (4B)
- A4 paper
- Breadboard
- Jumper wires
- Resistors
- Grove Temperature & Humidity Sensor

### Installation
1. Clone this repository:
    ```bash
    git clone https://github.com/treshanappuhamy/flexible-sensor-implementation.git
    ```
2. Open the `.ino` files in Arduino IDE.
3. Upload the sketches to the ESP32 microcontroller.

### Usage
1. **Strain Sensor**: Connect the sensor to the ESP32 as per the schematic in the report. Upload `StrainSen.ino` and observe the readings.
2. **Capacitive Touch Sensor**: Follow the wiring diagram and upload `capacitiveTouchSensor.ino`.
3. **Capacitive Proximity Sensor**: Connect as described in the report and upload `proximity.ino`.
4. **Temperature & Humidity Sensor**: Use `DHTtester.ino` for reading temperature and humidity values.
5. **Variable Resistor Switch**: Use `variableres.ino` to implement a multi-stage switch.

## Methodology

The project employs the conductivity of graphite to create various sensors on paper. Graphite sketches act as conductive paths, and the ESP32 microcontroller reads the changes in resistance or capacitance to provide sensor readings.

## Results

The developed sensors were tested for accuracy and reliability. The project report contains detailed results and discussions, including graphs and tables showing sensor performance.

## Demo Video

A demonstration of the project can be viewed [here](https://youtu.be/mcv_tcQdyJ4?si=XRehQ1RpHwCaxZqP).

## Contributions

Contributions are welcome! Please fork this repository and submit pull requests with your improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## References

For more detailed information, please refer to the project report: [Mini Project Paper (Report) - Group 12.pdf](Mini Project Paper (Report) - Group 12.pdf)

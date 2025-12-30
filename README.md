# ORP Salinity Sensor - *Science Olympiad Gold Medal*
![ORP main pic](https://github.com/ibyteibit/ORP-Salinity-Sensor/blob/main/pics/ORP.png)
## Description
- An Oxidation-Reduction Potential salinity sensor that measures the NaCl concentration of a solution and displays it on the Arduino Serial Monitor
- The probe consists of a Cu/CuSO₄ half-cell and an Ag wire which generate a voltage when dipped in solution
- Three LEDs indicate the solution’s concentration range
- The device won Gold at the 2024 CT Science Olympiad

## Materials & Tools
### Mechanical:
- Glass tube
- Rubber stopper
- String
- Bottle cap
### Electrical:
- Arduino UNO
- Breadboard
- Resistors (330Ω, 1KΩ, 100KΩ)
-	Red, Green, and Blue LEDs
-	Male-to-male Jumper wires
-	Hookup Wire
-	Operational Amplifier
-	60/40 Solder
-	9V Battery
### Chemical:
- 0.1M Copper Sulfate Solution
-	Silver Wire
-	Copper Wire
### Tools:
- Arduino IDE
- Ruler
- Wire cutter/stripper
- Soldering iron
- X-Acto knife

## Methodology
- Designed a non-inverting Op Amp circuit to amplify the half-cell's signal which is fed into the Arduino
- Experimentally determined a linear relationship between NaCl ppm and voltage with R² = 0.988
- Constructed the half-cell with a glass tube containing 0.1M CuSO₄, a Cu wire, and a thin string as a semi-permeable membrane

![empirical relationship](https://github.com/ibyteibit/ORP-Salinity-Sensor/blob/main/pics/ORPGraph.png)

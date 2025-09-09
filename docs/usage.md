# Usage Guide

## Prerequisites
- UnoArduSim installed (see Installation.md).
- Sketch: `../base_trab/base_trab_2.ino`.

## Step-by-Step Instructions
1. **Launch UnoArduSim**:
   - Navigate to `UnoArduSimV2.9.2/` and run `UnoArduSim.exe`.

2. **Load the Sketch**:
   - In UnoArduSim, go to File > Open and select `base_trab/base_trab_2.ino`.

3. **Configure Inputs**:
   - Set digital pins 0-3 to the binary representation of the first 4-bit number.
   - Set digital pins 4-7 to the binary representation of the second 4-bit number.
   - Example: To add 5 (0101) + 3 (0011):
     - Pin 0: 1 (LSB of first number)
     - Pin 1: 0
     - Pin 2: 1
     - Pin 3: 0
     - Pin 4: 1 (LSB of second number)
     - Pin 5: 1
     - Pin 6: 0
     - Pin 7: 0

4. **Run the Simulation**:
   - Click the "Run" button in UnoArduSim.
   - The simulator will execute the loop() function continuously.

5. **Observe Outputs**:
   - Pins 8-11 will show the 4-bit sum.
   - Pin 12 will show the carry-out bit.
   - For the example: Pins 8-11 = 1000 (8 in decimal), Pin 12 = 0.

## Understanding the Output
- The full adder performs binary addition.
- If the sum exceeds 15 (1111 in binary), the carry-out on pin 12 will be 1.
- Use the simulator's visualization to see pin states in real-time.

## Troubleshooting
- Ensure all pins are correctly set as input/output in the sketch.
- Verify UnoArduSim is up to date.
- Check for any compilation errors in the simulator.
# Documentation for Arduino Full Adder Simulator

## Overview
This project simulates a 4-bit full adder circuit using Arduino code compatible with UnoArduSim.

## Files
- `base_trab_2.ino`: Base code to use on the simulator code
- `ino_config.txt.txt`: Configuration for UnoArduSim.
- `myArduPrefs.txt`: Simulator preferences.

### How It Works
- Reads 8 bits from pins 0-7.
- Adds them bit-wise with carry propagation.
- Outputs 4 sum bits to pins 8-11, carry to pin 12.

## Bugs in Original Code
- Variable initialization: Only last variable in list is set to 0.
- Inefficient logic in `somaBit` and `somaCarryBit`.
- Redundant code (Always-true condition).

## Fixed Code
Corrected bugs, optimized functions, added English comments.

### Function Explanations
- **`somaBit(int b1a, int b2a, int cBit)`**: Computes sum bit using XOR: `(b1a ^ b2a) ^ cBit`.
- **`somaCarryBit(int b1a, int b2a, int cBit)`**: Computes carry using: `(b1a && b2a) || (b1a && cBit) || (b2a && cBit)`.
- **`setup()`**: Initializes pins (0-7 input, 8-12 output).
- **`loop()`**: Reads inputs, performs 4-bit addition, writes outputs.

## Future Improvements
- Expand to 8-bit or 16-bit adder for larger numbers.
- Add subtraction or other arithmetic operations.
- Optimize code using bitwise operations for speed.
- Add input validation and error handling.
- Make code modular for reuse in other projects.
- Improve documentation with diagrams and examples.

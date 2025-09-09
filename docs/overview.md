# Overview

## Detailed Description
This project for "Analizar Orient. Tecnicas" at SENAC NH, is focuses on making the documentation for the simulating digital circuits in software. It implements all the information needed for the use of the UnoArduSimV2.9.2. The code is a 4-bit full adder, using Arduino code. The simulation runs on UnoArduSim, allowing students to test logic without hardware.

## Purpose and Goals
- Demonstrate digital logic implementation in embedded systems.
- Teach binary addition and carry propagation.
- Provide hands-on experience with Arduino programming and simulation.
- Practice making documentation for projects.

## Key Components
- **Full Adder Functions**: `somaBit` for sum, `somaCarryBit` for carry.
- **4-Bit Chaining**: Adds two 4-bit numbers bit by bit.
- **Input/Output**: Uses Arduino pins for data in/out.

## Step-by-Step Operation
1. Read 4-bit inputs from pins 0-3 and 4-7.
2. Compute sum and carry for each bit position.
3. Output 4-bit result to pins 8-11, carry to pin 12.

## Educational Benefits
- Learn binary math and logic gates.
- Understand embedded system constraints.
- Practice debugging and optimization.

## Project Structure
- `../base_trab/`: Sketches (`base_trab_2.ino` and arduino configurations).
- `../UnoArduSimV2.9.2/`: Simulator executable and samples.
- `../docs/`: All documentation files about the project

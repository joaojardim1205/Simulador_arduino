
//TECNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Tecnicas

// Simulador de circuito FullAdder
int carryBit = 0;
int nib1a = 0, nib1b = 0, nib1c = 0, nib1d = 0;
int nib2a = 0, nib2b = 0, nib2c = 0, nib2d = 0;
int res1a = 0, res1b = 0, res1c = 0, res1d = 0;

// Function to calculate the sum bit of a full adder
int somaBit(int b1a, int b2a, int cBit)
{
    // Sum bit is the XOR of the three inputs
    int bitResult = (b1a ^ b2a) ^ cBit;
    return bitResult;
}

// Function to calculate the carry bit of a full adder
int somaCarryBit(int b1a, int b2a, int cBit)
{
    // Carry bit is 1 if at least two of the three inputs are 1
    int newCarry = (b1a && b2a) || (b1a && cBit) || (b2a && cBit);
    return newCarry;
}

// Setup function: Initializes pins
void setup()
{
    pinMode(0, INPUT);
    pinMode(1, INPUT);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, INPUT);
}

// Main loop: Reads inputs, performs addition, writes outputs
void loop()
{
    // Read input bits from pins
    nib1a = digitalRead(0);
    nib1b = digitalRead(1);
    nib1c = digitalRead(2);
    nib1d = digitalRead(3);
    nib2a = digitalRead(4);
    nib2b = digitalRead(5);
    nib2c = digitalRead(6);
    nib2d = digitalRead(7);

    // Perform 4-bit addition using full adder logic
    carryBit = 0;
    res1a = somaBit(nib1a, nib2a, carryBit);
    carryBit = somaCarryBit(nib1a, nib2a, carryBit);
    res1b = somaBit(nib1b, nib2b, carryBit);
    carryBit = somaCarryBit(nib1b, nib2b, carryBit);
    res1c = somaBit(nib1c, nib2c, carryBit);
    carryBit = somaCarryBit(nib1c, nib2c, carryBit);
    res1d = somaBit(nib1d, nib2d, carryBit);
    carryBit = somaCarryBit(nib1d, nib2d, carryBit);

    // Write result bits to output pins
    digitalWrite(8, res1a);
    digitalWrite(9, res1b);
    digitalWrite(10, res1c);
    digitalWrite(11, res1d);
    digitalWrite(12, carryBit);
}
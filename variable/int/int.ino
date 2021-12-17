// ตัวแปรชนิดตัวเลขจำนวนเต็ม

// Syntax
// int var = val;

// Parameters
// var: variable name.
// val: the value you assign to that variable.

// Example Code
// This code creates an integer called 'countUp',
//  which is initially set as the number 0 (zero).
//  The variable goes up by 1 (one) each loop,
//  being displayed on the serial monitor.

int countUp = 0; // creates a variable integer called 'countUp'

void setup()
{
    Serial.begin(115200); // use the serial port to print the number
}

void loop()
{
    countUp++;               // Adds 1 to the countUp int on every loop
    Serial.println(countUp); // prints out the current state of countUp
    delay(1000);
}
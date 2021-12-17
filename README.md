# 30105-2006_Computer_Programing

## ตัวแปรชนิดตัวเลขจำนวนเต็ม

### byte

[Data Types]
Description
A byte stores an 8-bit unsigned number, from 0 to 255.

Syntax
byte var = val;

Parameters
var: variable name.
val: the value to assign to that variable.

ตัวแปรชนิดตัวเลขจำนวนเต็ม
short
[Data Types]
Description
A short is a 16-bit data-type.

On all Arduinos (ATMega and ARM based) a short stores a 16-bit (2-byte) value.
This range of -32,768 to 32,767 (minimum value of -2^15 and a maximum value of (2^15) - 1).

Syntax
short var = val;

Parameters
var: variable name.
val: the value you assign to that variable.

Example Code
short ledPin = 13

ตัวแปรชนิดตัวเลขจำนวนเต็ม
int
[Data Types]
Description
Integers are your primary data-type for number storage.

An int stores a 16-bit (2-byte) value. This range of -32,768 to 32,767
Syntax
int var = val;

Parameters
var: variable name.
val: the value you assign to that variable.

Example Code

int countUp = 0; //creates a variable integer called 'countUp'

void setup() {
Serial.begin(9600); // use the serial port to print the number
}

void loop() {
countUp++; //Adds 1 to the countUp int on every loop
Serial.println(countUp); // prints out the current state of countUp
delay(1000);
}

ตัวแปรชนิดตัวเลขจำนวนเต็ม
long
[Data Types]
Description
Store 32 bits (4 bytes), from -2,147,483,648 to 2,147,483,647.

Syntax
long var = val;

Parameters
var: variable name.
val: the value assigned to the variable.

Example Code
long speedOfLight_km_s = 300000L;

ตัวแปรชนิดตัวเลขทศนิยม
float
[Data Types]
Description
Datatype for floating-point numbers, a number that has a decimal point.

Syntax
float var = val;

Parameters
var: variable name.
val: the value you assign to that variable.

Example Code
float myfloat;
float sensorCalbrate = 1.117;

int x;
int y;
float z;

x = 1;
y = x / 2; // y now contains 0, ints can't hold fractions
z = (float)x / 2.0; // z now contains .5 (you have to use 2.0, not 2)

ตัวแปรชนิดตัวเลขทศนิยม
double
[Data Types]
Description
Double precision floating point number. doubles have 8-byte (64 bit) precision.

Syntax
double var = val;

Parameters
var: variable name.
val: the value to assign to that variable.

Example Code
double sensorCalbrate = 1.117;

ตัวแปรชนิดตัวอักขระ
char
[Data Types]
Description
A data type used to store a character value.
Character literals are written in single quotes,
like this: 'A' (for multiple characters - strings - use double quotes: "ABC").

Syntax
char var = val;

Parameters
var: variable name.
val: the value to assign to that variable.

Example Code
char myChar = 'A';
char myChar = 65; // both are equivalent

ตัวแปรชนิดข้อความ
String
[Data Types]

Syntax
String(val)
String(val, base)
String(val, decimalPlaces)

Parameters
val: a variable to format as a String.
Allowed data types: string, char, byte, int, long, unsigned int, unsigned long, float, double.
base: (optional) the base in which to format an integral value.
decimalPlaces: only if val is float or double. The desired decimal places.

Example Code
All of the following are valid declarations for Strings.

String stringOne = "Hello String"; // using a constant String
String stringOne = String('a'); // converting a constant char into a String
String stringTwo = String("This is a string"); // converting a constant string into a String object
String stringOne = String(stringTwo + " with more"); // concatenating two strings
String stringOne = String(13); // using a constant integer
String stringOne = String(analogRead(0), DEC); // using an int and a base
String stringOne = String(45, HEX); // using an int and a base (hexadecimal)
String stringOne = String(255, BIN); // using an int and a base (binary)
String stringOne = String(millis(), DEC); // using a long and a base
String stringOne = String(5.698, 3); // using a float and the decimal places

ตัวแปรชนิดตรรกะ
bool
[Data Types]
Description
A bool holds one of two values, true or false. (Each bool variable occupies one byte of memory.)

Syntax
bool var = val;

Parameters
var: variable name.
val: the value to assign to that variable.

Example Code
This code shows how to use the bool datatype.

int LEDpin = 5; // LED on pin 5
int switchPin = 13; // momentary switch on 13, other side connected to ground

bool running = false;

void setup() {
pinMode(LEDpin, OUTPUT);
pinMode(switchPin, INPUT);
digitalWrite(switchPin, HIGH); // turn on pullup resistor
}

void loop() {
if (digitalRead(switchPin) == LOW) {
// switch is pressed - pullup keeps pin high normally
delay(100); // delay to debounce switch
running = !running; // toggle running variable
digitalWrite(LEDpin, running); // indicate via LED
}
}

// ตัวแปรชนิดตัวเลขจำนวนเต็ม
// Description
// Long variables are extended size variables for number storage,
//  and store 32 bits (4 bytes), from -2,147,483,648 to 2,147,483,647.

// Syntax
// long var = val;

// Parameters
// var: variable name.
// val: the value assigned to the variable.

// Example Code
long speedOfLight_km_s = 300000L; // see the Integer Constants page for explanation of the 'L'

void setup()
{
  Serial.begin(115200); // use the serial port to print the number
}

void loop()
{
  Serial.println(speedOfLight_km_s); // prints out the speedOfLight_km_s
  delay(1000);
}
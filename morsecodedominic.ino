
//Initializes variable for the D7 LED
int light = D7;

void setup() {

    //Designates the light as an output pin, so power can be sent to it.
    pinMode(light, OUTPUT);

}


/* Blinks 'DOMINIC' in Morse Code using the light

D - . . (ON 300, OFF 100, ON 100, OFF 100, ON 100) OFF 300
O - - - (ON 300, OFF 100, ON 300, OFF 100, ON 300) OFF 300
M - - (ON 300, OFF 100, ON 300) OFF 300
I . . (ON 100, OFF 100, ON 100) OFF 300
N - . (ON 300, OFF 100, ON 100) OFF 300
I . . (ON 100, OFF 100, ON 100) OFF 300
C - . - . (ON 300, OFF 100, ON 100, OFF 100, ON 300, OFF 100, ON 100) OFF 700

*/

//Blinks light on and off for '.'
void dot() {
    digitalWrite(light, HIGH);
    delay(100);
    digitalWrite(light, LOW);
    delay(100);
}


//Blinks light on and off for '-'
void dash() {
    digitalWrite(light, HIGH);
    delay(300);
    digitalWrite(light, LOW);
    delay(100);
}


//Communicates 'Dominic' in Morse Code
//delays here are -100 because dot() and dash() also delay by 100
void loop() {
    
    //D
    dash(); dot(); dot(); 
    delay(200);
    //O
    dash(); dash(); dash(); 
    delay(200);
    //M
    dash(); dash(); 
    delay(200);
    //I
    dot(); dot(); 
    delay(200);
    //N
    dash(); dot(); 
    delay(200);
    //I
    dot(); dot(); 
    delay(200);
    //C
    dash(); dot(); dash(); dot();
    delay(600);

    
}

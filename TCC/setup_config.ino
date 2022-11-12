void setup_config()
{
    Serial.begin(52630);
    pinMode(F_R, INPUT_PULLUP);
    pinMode(TX_R, OUTPUT);
    pinMode(TX_L, OUTPUT);
    pinMode(pinvrx, INPUT);
    pinMode(pinvry, INPUT);
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);  
}

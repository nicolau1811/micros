void frente_re(){
  joystick();
  if(frente && re){
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
            
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,0);
    digitalWrite(TX_L,0);
    _delay_loop_2(TX_P);
      
    digitalWrite(TX_R,1);
    digitalWrite(TX_L,1);
    _delay_loop_2(TX_P_STOP);
  }
}

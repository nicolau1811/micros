void joystick()
{ 
  delay(50);
  int vrx = analogRead(pinvrx);
  int vry = analogRead(pinvry);
  x = map(vrx,0,1023,0,100);
  y = map(vry,0,1023,0,100);
  
  if(x == 49 && y == 49)
  {
      re = 0;
      frente = 0;
      esquerdo = 0;
      direito = 0;
      k=1;
  }
  // frente     
    if(y>=60) 
    {
      k=0;
        frente = 1;
        re = 0;
        Speed = 0x0000;        
    }
        // ré
          if(y < 39)
          {
            k=0;
              re = 1;
              frente = 0;
              Speed = 0x00FF;
          }       
                Speed = map(vry,60,39,0x0030,0x06FF);
                if(re)
                Speed =~Speed;
       //lado esquerdo
       if(x>=60)
       {
           digitalWrite(TX_R,1);
           digitalWrite(TX_L,0);
           Speed = 0x00FF;
           esquerdo = 1;
           direito = 0;
           k=0;
       }
       
       //lado direito
         if(x <= 39){
            digitalWrite(TX_R,0);
            digitalWrite(TX_L,1);
            Speed = 0x00FF;
            direito = 1;
            esquerdo = 0;
            k=0;
        }
        Speed = map(vrx,60,39,0x0030,0x06FF);
      
}

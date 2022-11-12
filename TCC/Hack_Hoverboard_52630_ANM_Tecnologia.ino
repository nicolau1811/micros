//**********************************************************************
//                    YOU TUBE - ANM Tecnologia                       **
//                                                                    **
// Alberto Noboru Miyadaira                                           **
// www.albertonoboru.com.br                                           **
//                                                                    **
// Baud rate: 26315bps, 31250bps, 52630bps                            **
// Packet/Pacote: 0x100,LSB,MSB,LSB,MSB,0x055,0x058,0x058,0x000,0x0FE **
//                                                                    **
// Good luck with your projects                                       **
// Boa sorte com seus projetos                                        **
//                                                                    **
// Por favor, mantenha os créditos...                                 **
//**********************************************************************

#define F_R 4     //0 - forward/frente
                  //1 - reverse/ré
#define pinvrx A0
#define pinvry A1
                  
//*********************************************************************************************************
// If the pins are changed, the generated signals must be checked in the logic analyzer                  **
// Se os pinos forem alterados, os sinais gerados devem ser verificados no analisador lógico             **
//*********************************************************************************************************

#define TX_R 6   //Pin TX
#define TX_L 5   //Pin TX

//**********************************************************
//                 baud rate: 26315 bps                   **
//**********************************************************
//unsigned char TX_P = 107;       //Período de um bit - Period of one bit
//unsigned char TX_P1 = 107;      //Período de um bit - Period of one bit

//**********************************************************
//                 baud rate: 31250 bps                   **
//**********************************************************
//unsigned char TX_P = 80;       //Período de um bit - Period of one bit
//unsigned char TX_P1 = 80;      //Período de um bit - Period of one bit

//**********************************************************
//                 baud rate: 52630 bps                   **
//**********************************************************
unsigned char TX_P = 31;       //Período de um bit - Period of one bit
unsigned char TX_P1 = 26;      //Período de um bit - Period of one bit

unsigned char TX_P_STOP = 200; //Período do stop bit + delay- Period of stop bit + delay



int Speed = 0x0000; //Velocidade

bool re=0, frente=0, esquerdo=0, direito=0, k=0;
int  x = 0;
int  y = 0;

void setup() 
{    
    setup_config();
}

void loop() 
{      
      joystick();
      estado_serial();
      //**********************************************************
      //                 Start packet: 0x100                    **
      //**********************************************************
      //if(Serial.available()){
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P_STOP);
      
      //**********************************************************
      //               1º speed - velocidade                    **
      //**********************************************************
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P1);
      
      digitalWrite(TX_R,(Speed)&1);
      digitalWrite(TX_L,(Speed)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>1)&1);
      digitalWrite(TX_L,(Speed>>1)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>2)&1);
      digitalWrite(TX_L,(Speed>>2)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>3)&1);
      digitalWrite(TX_L,(Speed>>3)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>4)&1);
      digitalWrite(TX_L,(Speed>>4)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>5)&1);
      digitalWrite(TX_L,(Speed>>5)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>6)&1);
      digitalWrite(TX_L,(Speed>>6)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,(Speed>>7)&1);
      digitalWrite(TX_L,(Speed>>7)&1);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P1);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P_STOP);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,(Speed>>8)&1);
      digitalWrite(TX_L,(Speed>>8)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>9)&1);
      digitalWrite(TX_L,(Speed>>9)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>10)&1);
      digitalWrite(TX_L,(Speed>>10)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>11)&1);
      digitalWrite(TX_L,(Speed>>11)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>12)&1);
      digitalWrite(TX_L,(Speed>>12)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>13)&1);
      digitalWrite(TX_L,(Speed>>13)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>14)&1);
      digitalWrite(TX_L,(Speed>>14)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>15)&1);
      digitalWrite(TX_L,(Speed>>15)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P_STOP);

      //**********************************************************
      //               2º speed - velocidade                    **
      //**********************************************************
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,(Speed)&1);
      digitalWrite(TX_L,(Speed)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>1)&1);
      digitalWrite(TX_L,(Speed>>1)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>2)&1);
      digitalWrite(TX_L,(Speed>>2)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>3)&1);
      digitalWrite(TX_L,(Speed>>3)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>4)&1);
      digitalWrite(TX_L,(Speed>>4)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>5)&1);
      digitalWrite(TX_L,(Speed>>5)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>6)&1);
      digitalWrite(TX_L,(Speed>>6)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>7)&1);
      digitalWrite(TX_L,(Speed>>7)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P_STOP);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,(Speed>>8)&1);
      digitalWrite(TX_L,(Speed>>8)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>9)&1);
      digitalWrite(TX_L,(Speed>>9)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>10)&1);
      digitalWrite(TX_L,(Speed>>10)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>11)&1);
      digitalWrite(TX_L,(Speed>>11)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>12)&1);
      digitalWrite(TX_L,(Speed>>12)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>13)&1);
      digitalWrite(TX_L,(Speed>>13)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>14)&1);
      digitalWrite(TX_L,(Speed>>14)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,(Speed>>15)&1);
      digitalWrite(TX_L,(Speed>>15)&1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P_STOP); 
    
      if(k)
      {
            //**********************************************************
            //                      Code: 0X0AA                       **
            //**********************************************************  
            //Hoverboard without auto-balance function / Hoverboard sem função de auto-equilíbrio
            //The main board does not energize the motor phases / A placa principal não energiza as fases do motor
            
            digitalWrite(TX_R,0);
            digitalWrite(TX_L,0);
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
      
            digitalWrite(TX_R,1);
            digitalWrite(TX_L,1);
            _delay_loop_2(TX_P);
      
            digitalWrite(TX_R,0);
            digitalWrite(TX_L,0);
            _delay_loop_2(TX_P);
      
            digitalWrite(TX_R,1);
            digitalWrite(TX_L,1);
            _delay_loop_2(TX_P_STOP);
      }
      else
      {
            //**********************************************************
            //                      Code: 0X055                       **
            //**********************************************************         
            //The main board drives the motor.   
            //A placa principal aciona o motor.
            esq();
            dirt();
            frente_re();
      }

      //**********************************************************
      //                      Code: 0X058                       **
      //********************************************************** 
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
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

      //**********************************************************
      //                      Code: 0X058                       **
      //**********************************************************
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
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

      //**********************************************************
      //                      Code: 0X000                       **
      //**********************************************************
        
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
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
      
      //**********************************************************
      //                      Code: 0X0FE                       **
      //**********************************************************
             
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);
      
      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,0);
      digitalWrite(TX_L,0);
      _delay_loop_2(TX_P);

      digitalWrite(TX_R,1);
      digitalWrite(TX_L,1);      
      _delay_loop_2(TX_P_STOP);                 
}
//}

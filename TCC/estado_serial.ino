void estado_serial()
{
  joystick();
  int vrx = analogRead(pinvrx);
  int vry = analogRead(pinvry);
  Serial.print("VRx: ");
  Serial.print(map(vrx,0,1023,0,100));
  Serial.print(" VRy: ");
  Serial.print(map(vry,0,1023,0,100));
  Serial.println();
  Serial.print("frente: ");
  Serial.print(frente);
  Serial.println();
  Serial.print("re: ");
  Serial.print(re);
  Serial.println();
  Serial.print("direito: ");
  Serial.print(direito);
  Serial.println();
  Serial.print("esquerdo: ");
  Serial.print(esquerdo);
  Serial.println();
  Serial.print(x);
  Serial.println();
  Serial.print(y);
  Serial.println();
  Serial.print(k);
  Serial.println();
}

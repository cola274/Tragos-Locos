void servoloop () {

while ( servo1 == HIGH){

  lcd.clear(); 
  lcd.begin(16, 2);
  lcd.setCursor(0,0); 
  lcd.print("Sirviendo trago");
}
  lcd.setCursor(0,0);
  lcd.print("Operación Finalizada")
  delay(2000);
  lcd.setCursor(0,0);
  lcd.print("Gracias por");
  lcd.setCursor(0,1); 
  lcd.print("su compra"); 
  delay(5000);
  return menu;

}

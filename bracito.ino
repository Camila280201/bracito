 #include <Servo.h>

#define pinBase 12//defino el nombre y pin de la base
#define pinDerecho 11 //defino el nombre y pin de servo derecho(adelante atras)
#define pinIzquierdo 10 //defino el nombre y pin de servo izquiero (arriba abajo)
#define pinPinza 9 //defino el nombre y pin de la pinza

Servo motorBase; //declara el servo de la base
Servo motorDerecho;   //declara el servo de servo derecho(adelante atras)
Servo motorIzquierdo;  //declara el servo deservo izquiero (arriba abajo)
Servo motorPinza; //declara el servo de la pinza
 

void setup() {
  // put your setup code here, to run once:

//Base
  motorBase.attach(pinBase);
  
  motorBase.write(45);
  delay(2000);//espere dos segundos
  motorBase.write(90);
  delay(2000);//espere dos segundos
  motorBase.write(180);
  delay(2000);//espere dos segundos


//servoderecho(adelante atras)

  motorDerecho.attach(pinDerecho);
  motorDerecho.write(0);
  delay(2000);//espere dos segundos
  motorDerecho.write(90);
  delay(2000);//espere dos segundos
  motorDerecho.write (180 );
  delay(2000);//espere dos segundos



//servo izquierdo(arriba abajo)
  motorIzquierdo.attach(pinIzquierdo);
  motorIzquierdo.write(0);
  delay(2000);//espere dos segundos
  motorIzquierdo.write(90);
  delay(2000);//espere dos segundos
  motorIzquierdo.write(180 );
  delay(2000);//espere dos segundos



//pinza
  
  motorPinza.attach(pinPinza); 
  motorPinza.write(0);
  delay(2000);//espere dos segundos
  motorPinza.write(90);
  delay(2000);//espere dos segundos
 




}

void loop() {
  // put your main code here, to run repeatedly:

}

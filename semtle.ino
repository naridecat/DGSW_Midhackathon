#include <DHT11.h>  //아두이노 온습도센서 DHT11을 사용하기위해 위에서 설치해두었던 라이브러리를 불러옵니다.
int RED = 7;
int GREEN = 6;
int BLUE = 5;


DHT11 dht11(A0);

void setup()

{

  Serial.begin(9600);
  pinMode(3, INPUT);

}

void loop()

{

  float temp, humi;
  int result = dht11.read(humi, temp);

  if (result == 0)

  {
    Serial.print(temp);
    Serial.print("/");
    Serial.print(humi);
    if (digitalRead(3) == 0){
      analogWrite(RED, 255);
      analogWrite(GREEN,255);
      analogWrite(BLUE, 255);
      delay(5000);
    } else {
      analogWrite(RED, 0);
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 0);
      
    }
    


  } else

  {

    Serial.println();
    Serial.print("Error No :");
    Serial.print(result);
    Serial.println();

  }
  
  delay(1000);
}

 


     #define WATERPIN 8
          int flag=0;
          int const Ir = A0;
   
     
         void setup() 
            {
               Serial.begin(9600);
               pinMode(Ir,INPUT);
               pinMode(WATERPIN, OUTPUT);
            }
       
         void loop() 
            { 
 
               int distance = analogRead(Ir);    
               Serial.print(distance);
               Serial.print(" - ");
               delay(1000);
     
                  if (distance >= 10  && flag==0)
                     {
                         Serial.println("stop water");
                         digitalWrite(WATERPIN, LOW);
                         delay(10);
                         flag=1;
                      }  
                   else
                  if (distance <=10  &&  flag==1)
                     {
                         Serial.println("start water");
                         digitalWrite(WATERPIN, HIGH);
                         delay(2000);
                         digitalWrite(WATERPIN, LOW);
                         delay(10000);  
                         digitalWrite(WATERPIN, HIGH);
                         delay(50000);
                         flag=0;  
                      }      
 

}

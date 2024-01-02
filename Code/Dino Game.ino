#include <FastLED.h>


#define NUM_LEDS 160
#define LED_PIN 3
#define Button 2

CRGB leds[NUM_LEDS];
char ch;
int key;
#define rr CRGB::Red
#define bb CRGB::Blue
#define gg CRGB::Green
#define bl CRGB::Black
#define wh CRGB::White
#define yl CRGB::Yellow

#define pp FastLED.show();
int y=0;
int x=0;
int cha[]={30,29,28,34,62,61,60,65,66,67};
int ro1[]={33,34,35,61,65,66,67,94,93,92};
int ro2[]={62,61,60,66,94,93,92,97,98,99};
int ro3[]={65,66,67,93,97,98,99,126,125,124};
int ro4[]={94,93,92,98,126,125,124,129,130,131};
int ro5[]={97,98,99,125,129,130,131,158,157,156};

int up=3;



void hand(int x,int a)
{
  if(x==0)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[cha[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[cha[i]]=bl;                     
      }
    }
  }
  else if(x==1)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[ro1[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[ro1[i]]=bl;                     
      }
    }
  }
  else if(x==2)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[ro2[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[ro2[i]]=bl;                     
      }
    }
  }
  else if(x==3)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[ro3[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[ro3[i]]=bl;                     
      }
    }
  }
  else if(x==4)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[ro4[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[ro4[i]]=bl;                     
      }
    }
  }
  else if(x==5)
  {
    if(a==1)
    {
      for(int i=0;i<10;i++)
      {
        leds[ro5[i]]=rr;                     
      }
    }
    else
    {
      for(int i=0;i<10;i++)
      {
        leds[ro5[i]]=bl;                     
      }
    }
  }
  
}


void goup()
{

  hand(0,0);
  hand(1,1);
  
  pp;
  delay(25);

  hand(1,0);
  hand(2,1);
  
  pp;
  delay(25);

  hand(2,0);
  hand(3,1);
  
  pp;
  delay(25);

  hand(3,0);
  hand(4,1);
  
  pp;
  delay(25);

  hand(4,0);
  hand(5,1);
  
  pp;
  delay(300);
}


void godown()
{

  hand(5,0);
  hand(4,1);
  
  pp;
  delay(25);

  hand(4,0);
  hand(3,1);
  
  pp;
  delay(25);

  hand(3,0);
  hand(2,1);
  
  pp;
  delay(25);

  hand(2,0);
  hand(1,1);
  
  pp;
  delay(25);

  hand(1,0);
  hand(0,1);
  
  pp;
}


void endd()
{

  leds[126] = yl;
  leds[125] = yl;
  leds[124] = yl;
  leds[97] = yl;
  leds[94] = yl;
  leds[93] = yl;
  leds[92] = yl;
  leds[65] = yl;
  leds[62] = yl;
  leds[61] = yl;
  leds[60] = yl;
  leds[58] = yl;
  leds[69] = yl;
  leds[90] = yl;
  leds[101] = yl;
  leds[122] = yl;
  leds[88] = yl;
  leds[102] = yl;
  leds[72] = yl;
  leds[54] = yl;
  leds[73] = yl;
  leds[86] = yl;
  leds[105] = yl;
  leds[118] = yl;
  leds[52] = yl;
  leds[75] = yl;
  leds[84] = yl;
  leds[107] = yl;
  leds[116] = yl;
  leds[115] = yl;
  leds[109] = yl;
  leds[82] = yl;
  leds[77] = yl;
  leds[51] = yl;


  
}

void ending()
{
  for(int i=0;i<160;i++)
  {
    leds[i]=wh;
  }
  endd();
  pp;
  while(1)
  {
    while(Serial.available()==0)
    {
    }
    ch=Serial.read();
    if(ch=='e')
    {
      break;
    }
  }
}


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(5);
  Serial.begin(9600);
  pinMode(Button, INPUT);
  digitalWrite(Button, HIGH);
  hand(0,1);
  pp;
}
int a=0,b=0,c=0,d=0,e=0;

void loop() {
  e=46;
  for (int i = 16; i < 31; i++)
  {
    if(leds[i] || leds[i+1] || leds[i+2] || leds[e])
     {
      Serial.println("end");
      ending();
     }
    
//    Serial.println(a);
//    if(
    leds[i] = bb;
    leds[i+1] = bb;
    leds[i+2] = bb;
    leds[e]=bb;
    FastLED.show();
    leds[i] = bl;
    leds[i+1] = bl;
    leds[i+2] = bl;
    leds[e]=bl;
    e--;
    delay(75);



//     ch='a';
//       ch = Serial.read();
       key = digitalRead(Button);
       Serial.println(key);
       if (key == 0 && x==0)
       {
        x=10;
       }
       if(x==10)
       {   
        x--;
        goup(); 
          pp;
       }
       else if(x>1)
       {
        x--;
       }
       else if(x==1)
       {
        x--;
        godown();
        pp;
        
       }
       
     }
    
  }

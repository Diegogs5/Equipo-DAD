//LOOK MUM NO COMPUTER KEYBOARD SEQUENCER. A SIMPLE DESIGN TO MAKE A 4017 STYLE SEQUENCER WITH MORE ADDED FUNCTIONS.
//MORE INFO CHECK LOOKMUMNOCOMPUTER.COM
//PLEASE EMAIL ME COMPUTER@LOOKMUMNOCOMPUTER.COM OR LOOKMUMNOCOMPUTER@GMAIL.COM IF ANY QUESTIONS
//ANY MODIFICATIONS PLEASE LET ME KNOW AND I CAN FEATURE ON THE WEBSITE
//OPEN SOURCE. DONT USE IN A PRODUCT OR WHATEVER WITHOUT TALKING TO ME
//SAM BATTLE 2017
//BOOM



//ALSO TO ADD! I HAVE MADE THIS CODE IN A WAY ITS EASY TO UNDERSTAND FOR A NONE CODER (LIKE MYSELF)
//I REMEMBER WHEN I STARTED ON ARDUINO BEING LIKE WHAT THE HELL IS GOING ON.
//SO IVE LAYED IT OUT LOGICALLY, SEINSE IT ISNT A COMPLICATED PROGRAM I FIGURED WHY THE HECK NOT!

//SO YES THIS ISNT THE BEST WAY OF GOING ABOUT THIS HOWEVER IT IS THE EASIEST TO UNDERSTAND
//FOR A NONE CODER MIND.


#define STEP1 2
#define STEP2 3
#define STEP3 4
#define STEP4 5
#define STEP5 6
#define STEP6 7
#define STEP7 8
#define STEP8 9
#define STEPBUTTON1   14
#define STEPBUTTON2   15
#define STEPBUTTON3   16
#define STEPBUTTON4   17
#define STEPBUTTON5   18
#define STEPBUTTON6   19
#define STEPBUTTON7   21
#define STEPBUTTON8   20

#define FORWARDS 12
#define VARIATION 19
#define RESET 10
#define BACK 13
#define ZERO 11

//ABOVE BASICALLY DEFINES THE NAMES OF THE PINS, PLEASE REMEMBER THE ANALOG PINS A0,A1,A2, BLAH BLAH CAN BE USED AS DIGITAL PINS. THE ARE
//DIGITAL 14 and UP!


int val = 0;
int old_val = 0;
int val1 = 0;
int old_val1 = 0;
int val2 = 0;
int old_val2 = 0;
int val3 = 0;
int old_val3 = 0;
int val4 = 0;
int old_val4 = 0;


int vals1 = 0;
int old_vals1 = 0;
int vals2 = 0;
int old_vals2 = 0;
int vals3 = 0;
int old_vals3 = 0;
int vals4 = 0;
int old_vals4 = 0;
int vals5 = 0;
int old_vals5 = 0;
int vals6 = 0;
int old_vals6 = 0;
int vals7 = 0;
int old_vals7 = 0;
int vals8 = 0;
int old_vals8 = 0;


int state = 0;
int led = 17;
int newled = 1;


void setup ()
{
  pinMode (STEP1, OUTPUT);
  pinMode (STEP2, OUTPUT);
  pinMode (STEP3, OUTPUT);
  pinMode (STEP4, OUTPUT);
  pinMode (STEP5, OUTPUT);
  pinMode (STEP6, OUTPUT);
  pinMode (STEP7, OUTPUT);
  pinMode (STEP8, OUTPUT);
  pinMode (FORWARDS, INPUT);
  pinMode (BACK, INPUT);
  pinMode (RESET, INPUT);
  pinMode (ZERO, INPUT);
  pinMode (STEPBUTTON1, INPUT);
  pinMode (STEPBUTTON2, INPUT);
  pinMode (STEPBUTTON3, INPUT);
  pinMode (STEPBUTTON4, INPUT);
  pinMode (STEPBUTTON5, INPUT);
  pinMode (STEPBUTTON6, INPUT);

  //SET THE PINS TO IN OR OUT
  

}


void loop ()
{  
  val1 = digitalRead (FORWARDS);
   if((val1 == HIGH) && (old_val1 == LOW))
 
}

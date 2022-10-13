#include <Keypad.h>

#define ROW_NUM     4 // four rows
#define COLUMN_NUM  3 // three columns
int i=0;
int j=0;
char check1[10];
char keys[ROW_NUM][COLUMN_NUM] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte pin_rows[ROW_NUM] = {18, 5, 17, 16}; // GIOP18, GIOP5, GIOP17, GIOP16 connect to the row pins
byte pin_column[COLUMN_NUM] = {4, 2, 15};  // GIOP4, GIOP0, GIOP2 connect to the column pins

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup() {
  Serial.begin(115200);
}

void loop() {
  char key = keypad.getKey();
    if (key != NO_KEY) {
        check1[i] = key;   //Store caracters in the array
        i++;
        j++;
        int bell=int(check1);
        Serial.println(check1);
        Serial.println(bell);
        
      
  }
}


#include <avr/io.h>
int main(void){
unsigned char i;
DDRC = 0x00;
DDRB = 0xFF;
 PORTB = 0x00;

while(1){
if(PINC==0b00100000)
{
PORTB=0b00100000;
else if (PINC == 0b01000000)
{
PORTB=0b01000000;
}
else{
 PORTB=0b00000000;
}
}
return 1;
}

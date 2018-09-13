/* Morse Code implemented on MSP430
 * using LED 1 of the experiment board
 * as output */

#include <msp430.h>

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	    // Stop Watchdog Timer

    P1DIR = 0x01;			        // Define port as input or output
                                    // 0 for input, 1 for output

    P1OUT = 0x00;			        // LED begins off

    char letra[16];					// Expression to translate

    letra[0]='C';
    letra[1]='l';
    letra[2]='u';
    letra[3]='b';
    letra[4]='e';
    letra[5]=' ';
    letra[6]='d';
    letra[7]='o';
    letra[8]='s';
    letra[9]=' ';
    letra[10]='C';
    letra[11]='i';
    letra[12]='n';
    letra[13]='c';
    letra[14]='o';
    letra[15]=0;
    int i=0;

    // State Machine

    for(i=0;i<15;i++){
    switch (letra[i]){
   		case ('A'):
   		case ('a'): 			//.-
     		P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
    	    P1OUT = 0x01;
    	    __delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('B'):
   		case ('b'):			//-...
     		P1OUT = 0x01;
     		__delay_cycles(750000);
     		P1OUT = 0x00;
     		__delay_cycles(250000);
     		P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
    	    P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
    	    P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('C'):
   		case ('c'):			//-.-.
			P1OUT = 0x01;
     		__delay_cycles(750000);
     		P1OUT = 0x00;
     		__delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
     		__delay_cycles(750000);
     		P1OUT = 0x00;
     		__delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('D'):
   		case ('d'):			//-..
			P1OUT = 0x01;
     		__delay_cycles(750000);
     		P1OUT = 0x00;
     		__delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('E'):
   		case ('e'):			//.
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('F'):
   		case ('f'):			//..-.
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('G'):
   		case ('g'):			//--.
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('H'):
   		case ('h'):			//....
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('I'):
   		case ('i'):			//..
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('J'):
   		case ('j'):			//.---
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('K'):
   		case ('k'):			//-.-
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('L'):
   		case ('l'):			//.-..
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('M'):
   		case ('m'):			//--
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('N'):
   		case ('n'):			//-.
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('O'):
   		case ('o'):			//---
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('P'):
   		case ('p'):			//.--.
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('Q'):
   		case ('q'):			//--.-
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('R'):
   		case ('r'):			//.-.
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('S'):
   		case ('s'):			//...
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('T'):
   		case ('t'):			//-
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('U'):
   		case ('u'):			//..-
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('V'):
   		case ('v'):			//...-
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('W'):
   		case ('w'):			//.--
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('X'):
   		case ('x'):			//-..-
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('Y'):
   		case ('y'):			//-.--
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case ('Z'):
   		case ('z'):			//--..
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(750000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(250000);
			P1OUT = 0x01;
    		__delay_cycles(250000);
    	    P1OUT = 0x00;
    	    __delay_cycles(750000);
   		break;

   		case (' '):			//-...-
    	    P1OUT = 0x00;
    	    __delay_cycles(1750000);
   		break;


}
    }
    return 0;
}

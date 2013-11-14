/*******************************************
  * Author: C2C Caleb Ziegler/CS-39
  * Created: 15 Oct 2013
  * Description: This program runs an
  * imaginary pong game. The pong game is
  * seen in the changing numbers in memory.
*******************************************/

#include <msp430.h> 
#include "pong_header.h"


int main(void) {

    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    circle_ball myBall = createball(620,160,10,10,10);    //Initializes variables to build ball

    while(1==1)
    {
    	myBall = moveball(myBall);
    }

	return 0;
}

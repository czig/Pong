/*
 * pong_header.h
 * Author: C2C Caleb Ziegler
 * Date: 15 Oct 2013
 * Description: Header file for a pong game
 */

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 320
#define TRUE 1
#define FALSE 0

//Initialize the ball parameters
	struct position {
    	int x, y;
	};
	typedef struct position position_ball; //This struct is now called position_ball

	struct velocity {
		int x, y;
		};
		typedef struct velocity velocity_ball; //This struct is now called velocity_ball

	struct circle {
		position_ball center;
		velocity_ball velocity;
		char radius;
	};
	typedef struct circle circle_ball; //This struct is now called circle_ball

//Create prototype functions
	circle_ball createball(int xposition, int yposition, int xvelocity, int yvelocity, int radius);
	circle_ball moveball (circle_ball ball);
	char Hit(circle_ball ball, int side);





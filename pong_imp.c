/*
 * pong_imp.c
 * Author: C2C Caleb Ziegler
 * Date: 15 Oct 2013
 * Description: Implementation of the pong game
 */

#include "pong_header.h"

//Initializes all variables with the ball and gives ball starting values
circle_ball createball(int xposition, int yposition, int xvelocity, int yvelocity, int radius)
{
	position_ball position;
	position.x = xposition;
	position.y = yposition;

	velocity_ball velocity;
	velocity.x = xvelocity;
	velocity.y = yvelocity;

	circle_ball circle;
	circle.center = position;
	circle.velocity = velocity;
	circle.radius = radius;

	return circle;
}

//Moves ball by adding velocity to position of ball.
//If a hit is located with any wall, reverse the direction
//of the velocity. Sides 1 and 2 refer to the sides at 640
//and 0 (x-direction). Sides 3 and 4 refer to the sides at 320
//and 0 (y-direction).
circle_ball moveball (circle_ball ball)
{
	ball.center.x += ball.velocity.x;
	ball.center.y += ball.velocity.y;
	if(Hit(ball,1) == TRUE)
	{
		ball.velocity.x = (-1)*ball.velocity.x;
	}
	if(Hit(ball,2) == TRUE)
	{
		ball.velocity.x = (-1)*ball.velocity.x;
	}
	if(Hit(ball,3) == TRUE)
	{
		ball.velocity.y = (-1)*ball.velocity.x;
	}
	if(Hit(ball,4) == TRUE)
	{
		ball.velocity.y = (-1)*ball.velocity.x;
	}
	return ball;
}

//Determines if the ball hits a side. If a hit occurs, returns
//TRUE (1), and if no hit occurs, returns FALSE (0).
char Hit(circle_ball ball, int side)
{
	switch(side){
	case 1:
		if ((ball.center.x + ball.radius) >= SCREEN_WIDTH)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		};
	case 2:
		if ((ball.center.x + ball.radius) <= 0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		};
	case 3:
		if ((ball.center.y + ball.radius) >= SCREEN_HEIGHT)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		};
	case 4:
		if ((ball.center.y + ball.radius) <= 0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		};
	default:
		return FALSE;   //If a number other than 1, 2, 3, or 4 is seen in side, return false.
	}
}



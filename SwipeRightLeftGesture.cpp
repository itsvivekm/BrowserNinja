#include "SwipeRightLeftGesture.hpp"

bool SwipeRightLeftGesture::isStartingPosition (ScreenPoint currentPosition,,int numberOfFingers)
{
	if (numberOfFingers > 3)
		return false;
		
	if (currentPosition.x > 490 && currentPosition.x <= 640)
	{
		if (currentPosition.y > 120 && currentPosition.y < 360)
		{
			return true;
		}
	}

	return false;
}

bool SwipeRightLeftGesture::isStillValid (ScreenPoint currentPosition,int numberOfFingers)
{
	if (numberOfFingers > 3)
		return false;
		
	if (currentPosition.x <= (prevPosition.x + 30) )
	{
		return true;
	}

	return false;
}

bool SwipeRightLeftGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers > 3)
		return false;
	if (currentPosition.x > 150 && currentPosition.x < 0)
	{
		//if (currentPosition.y >= 130 && currentPosition.y <= 190)
		//{
			return true;
		//}
	}

	return false;
}

int SwipeRightLeftGesture::getGestureCode ()
{
	return gestureCode;
}
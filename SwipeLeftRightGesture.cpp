#include "SwipeLeftRightGesture.hpp"

bool SwipeLeftRightGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers > 2)	
		return false;

	if (currentPosition.x >= 0 && currentPosition.x < 150)
	{
		if (currentPosition.y >= 0 && currentPosition.y <= 480)
		{
			return true;
		}
	}

	return false;
}

bool SwipeLeftRightGesture::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers > 2)	
		return false;

	if (currentPosition.x >= (prevPosition.x - 30) )
	{
		return true;
	}

	return false;
}

bool SwipeLeftRightGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers > 2)	
		return false;

	if (currentPosition.x >= 490 && currentPosition.x <= 640)
	{
		if (currentPosition.y >= 0 && currentPosition.x <= 480)
		{
			return true;
		}
	}

	return false;
}

int SwipeLeftRightGesture::getGestureCode ()
{
	return gestureCode;
}
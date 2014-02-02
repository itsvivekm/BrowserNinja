#include "SwipeRightLeftGesture.hpp"

bool SwipeRightLeftGesture::isStartingPosition (ScreenPoint currentPosition,int numberOfFingers)
{
	if (currentPosition.x > 490 && currentPosition.x <= 640)
	{
		if (currentPosition.y >= 0 && currentPosition.y <= 480)
		{
			return true;
		}
	}

	return false;
}

bool SwipeRightLeftGesture::isStillValid (ScreenPoint currentPosition,int numberOfFingers)
{
	if (currentPosition.x <= (prevPosition.x + 20) )
	{
		return true;
	}

	return false;
}

bool SwipeRightLeftGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= 150 && currentPosition.x <= 490)
	{
		if (currentPosition.y >= 0 && currentPosition.y <= 480)
		{
			return true;
		}
	}

	return false;
}

int SwipeRightLeftGesture::getGestureCode ()
{
	return gestureCode;
}

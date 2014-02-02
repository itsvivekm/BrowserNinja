#include "SwipeLeftRightGesture.hpp"

SwipeLeftRightGesture::SwipeLeftRightGesture() : gestureCode(1)
{
	
}

bool SwipeLeftRightGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
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
	if (currentPosition.x >= (prevPosition.x - 20) )
	{
		return true;
	}

	return false;
}

bool SwipeLeftRightGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
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

int SwipeLeftRightGesture::getGestureCode ()
{
	return gestureCode;
}

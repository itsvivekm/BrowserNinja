#include "SwipeRightLeftGesture.hpp"

bool SwipeRightLeftGesture::isStartingPosition (ScreenPoint currentPosition)
{
	if (currentPosition.x >= 350 && currentPosition.x <= 500)
	{
		if (currentPosition.y >= 130 && currentPosition.y <= 190)
		{
			return true;
		}
	}

	return false;
}

bool SwipeRightLeftGesture::isStillValid (ScreenPoint currentPosition)
{
	if (currentPosition.x >= (prevPosition.x - 30) )
	{
		return true;
	}

	return false;
}

bool SwipeRightLeftGesture::isFinishPosition (ScreenPoint currentPosition)
{
	if (currentPosition.x >= 40 && currentPosition.x <= 90)
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
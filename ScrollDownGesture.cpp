#include "ScrollDownGesture.hpp"

bool ScrollDownGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= 150 && currentPosition.x <= 490)
	{
		if (currentPosition.y >= 360 && currentPosition.y <= 480)
		{
			return true;
		}
	}

	return false;
}

bool ScrollDownGesture::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= 150 && currentPosition.x <= 490)
	{
		if (currentPosition.y >= 360 && currentPosition.y <= 480)
		{
			return true;
		}
	}

	return false;
}

bool ScrollDownGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= 150 && currentPosition.x <= 490)
	{
		if (currentPosition.y >= 360 && currentPosition.y <= 480)
		{
			return false;
		}
	}

	return true;
}

int ScrollDownGesture::getGestureCode ()
{
	return gestureCode;
}

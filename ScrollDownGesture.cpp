#include "ScrollDownGesture.hpp"

bool ScrollDownGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if(numberOfFingers <= 2)
	{
		if (currentPosition.x >= 0 && currentPosition.x <= 500)
		{
			if (currentPosition.y >= 190)
			{
				return true;
			}
		}
	}

	return false;
}

bool ScrollDownGesture::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= (prevPosition.x - 30) )
	{
		return true;
	}

	return false;
}

bool ScrollDownGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (currentPosition.x >= 350 && currentPosition.x <= 500)
	{
		//if (currentPosition.y >= 130 && currentPosition.y <= 190)
		//{
			return true;
		//}
	}

	return false;
}

int ScrollDownGesture::getGestureCode ()
{
	return gestureCode;
}
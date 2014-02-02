#include "MinimizeWindowGesture.hpp"

bool MinimizeWindowGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers > 2)
    {
        if (currentPosition.x >= 150 && currentPosition.x <= 490)
        {
            if (currentPosition.y >= 120 && currentPosition.y <= 360)
            {
                return true;
            }
        }
    }
    
	return false;
}

bool MinimizeWindowGesture::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
	if(numberOfFingers > 2)
    {
        if (currentPosition.x >= 150 && currentPosition.x <= 490)
        {
            if (currentPosition.y >= 120 && currentPosition.y <= 360)
            {
                return true;
            }
        }
    }

    return false;
}

bool MinimizeWindowGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if(numberOfFingers <= 2)
    {
        if (currentPosition.x >= 150 && currentPosition.x <= 490)
        {
            if (currentPosition.y >= 120 && currentPosition.y <= 360)
            {
                return true;
            }
        }
    }
    
    return false;
}

int MinimizeWindowGesture::getGestureCode ()
{
	return gestureCode;
}
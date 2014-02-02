#include "ScrollUpGesture.hpp"

bool ScrollUpGesture::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
        if (currentPosition.x >= 150 && currentPosition.x <= 490)
        {
            if (currentPosition.y >= 0 && currentPosition.y <= 120)
            {
                return true;
            }
        }
    
	return false;
}

bool ScrollUpGesture::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
        
        if (currentPosition.x >= 0 && currentPosition.x <= 640)
        {
            if (currentPosition.y >= 0 && currentPosition.y <= 120)
            {
                return true;
            }
        }

        return false;
}

bool ScrollUpGesture::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
        if (currentPosition.x >= 0 && currentPosition.x <= 640)
        {
            if (currentPosition.y > 120 && currentPosition.y <= 480)
            {
                return true;
            }
        }
    
	return false;
}

int ScrollUpGesture::getGestureCode ()
{
	return gestureCode;
}

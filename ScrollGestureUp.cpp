#include "ScrollGestureUp.hpp"

bool ScrollGestureUp::isStartingPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if (numberOfFingers <= 2)
    {
        if (currentPosition.x >= 150 && currentPosition.x <= 490)
        {
            if (currentPosition.y >= 0 && currentPosition.y <= 120)
            {
                return true;
            }
        }
    }
    
	return false;
}

bool ScrollGestureUp::isStillValid (ScreenPoint currentPosition, int numberOfFingers)
{
	if(numberOfFingers <= 2)
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

bool ScrollGestureUp::isFinishPosition (ScreenPoint currentPosition, int numberOfFingers)
{
	if(numberOfFingers <= 2)
    {
        if (currentPosition.x >= 0 && currentPosition.x <= 640)
        {
            if (currentPosition.y > 120 && currentPosition.y <= 480)
            {
                return true;
            }
        }
    }
    
	return false;
}

int ScrollGestureUp::getGestureCode ()
{
	return gestureCode;
}
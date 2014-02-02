#include "BaseGesture.hpp"
#include <iostream>

using namespace std;

BaseGesture::BaseGesture ()
{
    tracking = false;
}

gestureState BaseGesture::isGestureRecognized (ScreenPoint currentPosition, int numberOfFingers)
{
    //cout << "Current position: " << currentPosition.x << " " << currentPosition.y << endl;

    if (tracking == true)
    {
        if (isFinishPosition(currentPosition, numberOfFingers) == true)
        {
            tracking = false;
            return FINISHED;
        }
        else if (isStillValid(currentPosition, numberOfFingers) == true)
        {
            prevPosition = currentPosition;
            return TRACKING_VALID;
        }
        
        tracking = false;
        return TRACKING_NOTVALID;
    }
    else
    {
        if (isStartingPosition(currentPosition, numberOfFingers) == true)
        {
            prevPosition = currentPosition;
            tracking = true;
            return STARTED;
        }

        return NOT_TRACKING;
    }
}

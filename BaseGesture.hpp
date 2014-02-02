#ifndef _BASEGESTURE_
#define _BASEGESTURE_ 

#include "BaseStruct.hpp"

class BaseGesture 
{
private:
    bool tracking = false;

protected:
	ScreenPoint prevPosition;

public:
    gestureState isGestureRecognized(ScreenPoint currentPosition, int numberOfFingers);

    virtual bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual bool isStillValid (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual int getGestureCode () = 0;
};

#endif
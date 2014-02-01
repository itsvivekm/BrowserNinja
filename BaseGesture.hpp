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
    gestureState isGestureRecognized(ScreenPoint currentPosition);

    virtual bool isStartingPosition (ScreenPoint currentPosition) = 0;
    virtual bool isStillValid (ScreenPoint currentPosition) = 0;
    virtual bool isFinishPosition (ScreenPoint currentPosition) = 0;
    virtual int getGestureCode () = 0;
};

#endif
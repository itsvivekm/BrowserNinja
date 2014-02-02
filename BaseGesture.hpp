#ifndef _BASEGESTURE_
#define _BASEGESTURE_ 

#include "BaseStruct.hpp"

class BaseGesture 
{
private:
    bool tracking;

protected:
	ScreenPoint prevPosition;

public:
	BaseGesture ();

    gestureState isGestureRecognized(ScreenPoint currentPosition, int numberOfFingers);

    virtual bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual bool isStillValid (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers) = 0;
    virtual int getGestureCode () = 0;
};

#endif
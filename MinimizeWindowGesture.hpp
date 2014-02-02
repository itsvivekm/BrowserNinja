#ifndef _MINIMIZEWINDOWGESTURE_
#define _MINIMIZEWINDOWGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class MinimizeWindowGesture : public BaseGesture
{
private:
	const int gestureCode = 4;
    
public:
	bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers);
	bool isStillValid (ScreenPoint currentPosition, int numberOfFingers);
	bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers);
	int getGestureCode ();
    
};

#endif
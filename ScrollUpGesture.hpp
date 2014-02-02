#ifndef _SCROLLUPGESTURE_
#define _SCROLLUPGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class ScrollUpGesture : public BaseGesture
{
private:
	const int gestureCode = 5;
    
public:
	bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers);
	bool isStillValid (ScreenPoint currentPosition, int numberOfFingers);
	bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers);
	int getGestureCode ();
    
};

#endif
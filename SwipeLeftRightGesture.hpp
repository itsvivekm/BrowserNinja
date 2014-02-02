#ifndef _SWIPELEFTRIGHTGESTURE_
#define _SWIPELEFTRIGHTGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class SwipeLeftRightGesture : public BaseGesture
{
private:
	const int gestureCode;

public:
	SwipeLeftRightGesture();

	bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers);
	bool isStillValid (ScreenPoint currentPosition, int numberOfFingers);
	bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers);
	int getGestureCode ();

};

#endif
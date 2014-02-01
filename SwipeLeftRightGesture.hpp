#ifndef _SWIPELEFTRIGHTGESTURE_
#define _SWIPELEFTRIGHTGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class SwipeLeftRightGesture : public BaseGesture
{
private:
	const int gestureCode = 1;

public:
	bool isStartingPosition (ScreenPoint currentPosition);
	bool isStillValid (ScreenPoint currentPosition);
	bool isFinishPosition (ScreenPoint currentPosition);
	int getGestureCode ();

};

#endif
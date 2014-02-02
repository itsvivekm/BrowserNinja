#ifndef _SWIPERIGHTLEFTGESTURE_
#define _SWIPERIGHTLEFTGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class SwipeRightLeftGesture : public BaseGesture
{
private:
	const int gestureCode = 2;

public:
	bool isStartingPosition (ScreenPoint currentPosition);
	bool isStillValid (ScreenPoint currentPosition);
	bool isFinishPosition (ScreenPoint currentPosition);
	int getGestureCode ();

};

#endif
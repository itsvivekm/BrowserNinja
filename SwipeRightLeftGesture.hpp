#ifndef _SWIPERIGHTLEFTGESTURE_
#define _SWIPERIGHTLEFTGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class SwipeRightLeftGesture : public BaseGesture
{
private:
	const int gestureCode = 2;

public:
	bool isStartingPosition (ScreenPoint currentPosition,int numberOfFingers);
	bool isStillValid (ScreenPoint currentPosition,int numberOfFingers);
	bool isFinishPosition (ScreenPoint currentPosition,int numberOfFingers);
	int getGestureCode ();

};

#endif
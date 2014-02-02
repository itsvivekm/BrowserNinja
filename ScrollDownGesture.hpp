#ifndef _SCROLLDOWNGESTURE_
#define _SCROLLDOWNGESTURE_

#include "BaseGesture.hpp"

using namespace std;

class ScrollDownGesture : public BaseGesture
{
private:
	const int gestureCode = 6;

public:
	bool isStartingPosition (ScreenPoint currentPosition, int numberOfFingers);
	bool isStillValid (ScreenPoint currentPosition, int numberOfFingers);
	bool isFinishPosition (ScreenPoint currentPosition, int numberOfFingers);
	int getGestureCode ();

};

#endif
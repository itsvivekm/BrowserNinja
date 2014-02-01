#ifndef _BASESTRUCT_
#define _BASESTRUCT_

struct ScreenPoint 
{
	int x = 0;
	int y = 0;
};

enum gestureState
{
    STARTED = 0,
    TRACKING_VALID,
    TRACKING_NOTVALID,
    FINISHED,
    NOT_TRACKING
};

#endif
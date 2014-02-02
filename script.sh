# Authored by Rushab and Vivek


#!/bin/bash

#
# Gestures Supported
# 1. Previous TAB
# 2. Next TAB
# 3. New TAB
# 4. Close TAB
# 5. Scroll Page up
# 6. Scroll Page down
# 7. C3-Hack
#


#Check if Chromium is open or not
if xwininfo -id $(xprop -root | awk '/NET_ACTIVE_WINDOW/ { print $5; exit }') | awk -F\" '/xwininfo:/ { print $2; exit }'| grep --color Chromium
then
	echo "found"
else
	wmctrl -a Chromium # GOTO Chromium
fi


#Gesture Selection
if [ $1 -eq 1 ] # GOTO Previous TAB 
then
  xte 'keydown Control_L' 'key Page_Up' 'keyup Control_L'

elif [ $1 -eq 2 ] # GOTO Next TAB
then
  xte 'keydown Control_L' 'key Page_Down' 'keyup Control_L'

elif [ $1 -eq 3 ] # OPEN New TAB
then
  xte 'keydown Control_L' 'key T' 'keyup Control_L'

elif [ $1 -eq 4 ] # CLOSE Current TAB
then
  xte 'keydown Control_L' 'key F4' 'keyup Control_L'

elif [ $1 -eq 5 ] # SCROLL Page UP
then
  for i in `seq 1 5` 
  do
    xte 'key Up'
    sleep 0.02
  done

elif [ $1 -eq 6 ] # SCROLL Page DOWN
then
  for i in `seq 1 5` 
  do
    xte 'key Down'
    sleep 0.02
  done

else
  xte 'keydown Control_L' 'key T' 'keyup Control_L'
  xte 'str www.hackeracademy.org' 'key Return'
  xte 'key F11'

fi



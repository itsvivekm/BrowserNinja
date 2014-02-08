Browser Ninja
====

Control your browser using hand gestures through a webcam

Youtube Video Link:	http://youtu.be/mof8nQ4mHEc



Hand Detection using Color Recognition:
Software to detect hand from videostream (webcam) and detect fingertips, number of fingers etc.
The software is based on OpenCV and C++, and is tested on Ubuntu 12.04 (both 32 and 64 bits) using both the 2.4.7 and 2.4.8 version 
of OpenCV



The software is compiled using the Makefile. Simply run 

	$make


in the terminal if you use Linux Or Mac, or simply run the command:

	g++ -o opencv main.cpp myImage.cpp handGesture.cpp roi.cpp  `pkg-config --cflags --libs opencv` 

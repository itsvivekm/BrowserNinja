// Authored by Rushab and Vivek

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void action_trigger(int userChoice)
{
    char command[50];
    sprintf(command, "./script.sh %d", userChoice);
    system(command);
}



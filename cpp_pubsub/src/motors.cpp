#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <net/if.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

#include <linux/can.h>
#include <linux/can/raw.h>

#include "MotorFunctions/MotorFunctions.cpp"

int main(void)
{
    MotorFunctions mf;

    mf.stop();
	
	return 0;
};
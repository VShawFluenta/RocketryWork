//First attempts at camera control code


#include "Arduino.h"
#define BUFF_SIZE 20;

uint8_t txBuf[BUFF_SIZE];


//Functions:

//Start recording 
// 1 << 6 Control the camera to start recording video


//turn off camera
// 1 << 7	Control the camera to stop recording video


//Set camera resolution
//SETTINGID_DISP_RESOLUTION	5	TEXT_SELECTION	Read and set the camera's resolution	Read & Write

//main program

//when sense power, ensure camera is in correct mode and turn on camera

//Enter while loop (while haven't detected launch )


//detect launch, break out of first while loop

//Second while loop, (while timer not done keep recording)


//Timer ends, stop recording




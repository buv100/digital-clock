#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){


  // שעון דיגיטלי

  time_t rawTime = 0; // Jan 1 1970
  struct tm *pTime = NULL;
  bool isRunning = true;

  printf("****  DIGITAL CLOCK ****\n");

  while(isRunning){

    time(&rawTime);

    pTime = localtime(&rawTime);

    printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
    
    sleep(1);
  }


  return 0;
}


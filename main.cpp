#include "mbed.h"
#include "HEPTA_EPS.h"
 
RawSerial pc(USBTX,USBRX,9600);
HEPTA_EPS eps(p16,p26);
 
int main()
{
    float bt;
    for(int i = 0; i < 10; i++) {
        eps.vol(&bt);
        pc.printf("Vol = %f\r\n",bt);
        wait(1.0);
    }
}
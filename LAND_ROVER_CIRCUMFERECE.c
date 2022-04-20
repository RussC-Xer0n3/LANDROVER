/**
 * The difficulty with this (my math might not be on point), we have vehicle x travelling at 20km/h
 * vehicle y in the opposite direction at 20km/h with a signal radius just over 90meters at 300,000km/s
 * for arguments sake 180meters to make a decision faster than 'what I think is' 60,000,000 km/s assuming
 * not location from sat nav, no cameras, no ai. On top of all of that, interference from other signals
 * and malicious behaviour. And it has to do it in or with an ICU which has an approximate transfer rate of EMS
 * of 200,OOO km/s Solution - (Optical ICU's) 300,000 m/s in a vaccum!
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

//Signal
float RAD;
float PI;
float DIST;
float SIG;

//ID's
unsigned char VIN;
unsigned char REG;
unsigned char ICU;
unsigned char MAC;
unsigned char ID;

#define RAD 24.0; //meters assuming 4 lane and 3 meters per lane for both oncoming and same traffic
#define PI 3.1415926535;
#define DIST /*distance between next vehicle(s)*/;

/* Sigmoid standard - 3GHz at 300ft? yahoo search for the convertion for 300ft to meters and 
 * https://www.lifewire.com/range-of-typical-wifi-network-816564 for approximate standard of
 * simple wifi at 2.4 and 5GHz just for an estimate reference value. 31.08.20. 
 */

//Guessing this is the standard, not yet looked it up seems logical a function which returns plus and minus of a single bit value.
#define SIG ((1) / (-1)); 

//#define VIN ('VF' + '\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh\xhh'); 
//#define REG ('\xhh\xhh\xhh\xhh \xhh\xhh\xhh') 
//#define ICU ('\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh'); 
//#define MAC ('\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh:\xhh\xhh');

#define VIN ''; /* I imagine these values are generated specifically according to make and model from the pool, obviously to year and half year based on registration date and then the last three randomly as increments, unsure of the algorithm */
#define ICU ''; /* Obvious, MAC address plus two extra hexideximal values, probably set the hex value to 36 for ICU MAC as opposed to 16 for MAC. */
#define REG ''; /* Same issue here from the pool, obviously to year and half year based on registration date and then the last three randomly as increments */
#define MAC ''; /* Standard MAC addressing */
#define ID (VIN, REG, ICU, MAC);

float main(float argv char **argc){
    /** Cannot begin to implement without more information but the idea is to calculate next 
        vehicles location based on sig radius and act accordingly, such as hoping to server,
        geolocation, physical collision avoidance and guidance on route via sat nav or local 
        lon lat nav based on hops, radius and other systems. */
    return 0;
}

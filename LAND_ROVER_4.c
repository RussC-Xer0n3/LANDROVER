/**
Idea would be for the vehicle to start having already 
reported it's last location and having already zero'd 
it's lon and lat. Then start reporting it's location and 
movement relevant to xyz.

Then engine is switched of at final destination or lon lat
continue to report per ID of vehicle L reports distance and
can be used to calculate average speed, lon lat already
report current speed anyway based on change.

@Created: 30.08.2020
@BY: Russell A E Clarke https://www.russellclarke.co.uk
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

float L;
float A;
float N;
float D = 3;
float R = 1;
float O;
float V;
float E;
float PI;
unsigned char report;

//location lon lat distance
float L1;
float L2;
float L3;

float main() {
    int engine, off = 0, on = 1;

    report = L++, L1++, L2++, L3++;

    engine = (0 != 1) ? 0 : 1;

    //lon and lat header files required here
    L = 0.000000; //distance set to zero
    L1 = 0.000000; //lon  
    L2 = 0.000000; //lat
    #define L3 = (-L1, -L2); //Get an invert for accuracy.
    #define A (pow((PI * R), D));
    #define N (pow(L, A)); //Distance in the Nth Dimension;
    #define O (/* id comprised of VIN, MAC, ICU, REG? */);
    #define V (L / E);
    #define E diff(time_t go, time_t stop);

    report;

    if(1){
        time_t go;
        report;
    }else if(0){
        time_t stop;
        report;
    }
    
    return 0;
}

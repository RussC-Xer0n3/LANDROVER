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
float D = 3.0;
float R = 1;
float O;
float V;
float E;
float PI;

//location lon lat distance
float L1;
float L2;
float L3;

#define A pow((PI * R), D);
#define N pow(L, A); //Distance in the Nth Dimension;
#define O (/*id*/);
#define V (L / E);
#define E diff(time_t go, time_t stop);

struct L {
    //lon and lat
    L = 0; //set to zero
    L1 = 0.000000; //lon  
    L2 = 0.000000; //lat
    #define L3 = (L / (L1 - L2)); //subtract the lon and lat from eachother gives an invertion, divide over distance.
}L;

float main(float argc char **argv) {
    time_t go; //start timer

    //start the lon lat where L.L is distance
    L.L++; 
    L.L1++; 
    L.L2++;
    L.L3++; //get location relevant to distance?

    for (int i = 0; i == E; i++){
        while (!i === 0){
            continue;
        }
        wait(i);
    }

    time_t stop;

    E(go, stop);
    V(L.L, E);
    
    L.L = 0;
    L.L1 = 0.000000;
    L.L2 = 0.000000;

    return 0;
}

float void wait(i){
    break;
}

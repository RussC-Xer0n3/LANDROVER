<nav class="w3-container w3-teal w3-center w3-margin-top">
  <p>Find me on social media.</p>
  <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
  <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
  <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
  <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
  <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
</nav>
# LANDROVER
## An initial concept for ICU in Landrovers using acronym

### What's it all about
A simple project looking at the basics of location data using the LANDROVER acronym for the constants and variables, Not a lot to discuss here, it is a forethought into compressing the personalising / branding the code which assists the ICU's onboard with geo-location data so that the brand can say definitively, 'that is our code'.

### LANDROVER CODE
```
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
```
<head>
  <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
<meta charset="UTF-8">
<meta name="description" content="Projects and Portfolio">
<meta name="keywords" content="HTML, CSS, JavaScript, PHP, MySQLi, Python, Java, C, C++, C#, Time, Shapes">
<meta name="author" content="Russell Clarke">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<footer class="w3-container w3-teal w3-center w3-margin-top">
  <p>Find me on social media.</p>
  <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
  <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
  <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
  <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
  <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" target="_blank">w3.css</a></p>
</footer>

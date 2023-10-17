#include<stdio.h>
#include<math.h>

//Declaring global variable
int N=12;
double TanValues[13];

//Declaring functions to convert degree to radians
double degtorad(double deg);

//Declaring function to follow the trapezoidal rule
double traprule(int N);

//Main functions
int main(){
  
  int i;
  double deg, rad;
  for (i =0; i <=N; i++){
    deg= i*5.0;
    rad = degtorad(deg);
    TanValues[i] = tan(rad);
    printf("TanValues{%d} = %f at x = %.2f degrees\n", i,TanValues[i], deg);
}
// calculated value    
double integral_approx = traprule(N);
// true value
double integral_exact = log(2.0);
        
printf("Your approximation of the integral from x=0 degrees to x = 60 degrees of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is :\n%.5f\n", integral_approx, integral_exact);
    
}

// Definition of degtorad function  
double degtorad(double deg){
   return (deg*M_PI)/180.0;
    
}

// Definition for traprule function   
double traprule(int N){
    
int i;
double width, area = TanValues[0] +TanValues[N];
for(i=1; i<N; i++){
area+=2.0*TanValues[i];
 }
    
width = degtorad((60.0-0)/(2.0*N));
area = width*area;
return area;
}

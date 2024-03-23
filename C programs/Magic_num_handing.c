#include <stdio.h>
//This allows us to get rid of magic numbers to improve code readability
#define LOWER 0
#define HIGHER 300
#define STEP 20
int main(){
//Here a is farenheit
float a, b;
//using for loop as it is cleaner
for (a=HIGHER; a>=LOWER; a=a-STEP){

    b = 5.0/9.0*(a-32);
    printf("F : %6.0f \t\t C : %6.1f\n", a, b);
    
}

return 0;
}
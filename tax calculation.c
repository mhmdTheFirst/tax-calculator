#include <stdio.h>
int main (){
float A=0,B=0,C=0,D=0,E=0,F=0,G=0,total,salary;
    printf("please enter your salary:");
    scanf("%f",&salary);
    
    if (salary>5.6*1000000 && salary<=15000000)
    A=(salary-5.6*1000000)*0.10;
    else if (salary>15000000)
    B=(9.4*1000000)*0.10;
    
    if (salary>15*1000000 && salary<=25000000)
    C=(salary-15*1000000)*0.15;
    else if (salary>25000000)
    D=(10000000)*0.15;
    
    if (salary>25*1000000 && salary<=35000000)
    E=(salary-25*1000000)*0.20;
    else if (salary>35000000){
    F=(10000000)*0.20;
    G=(salary-35000000)*0.30;}

    total=A+B+C+D+E+F+G;

    printf("your total tax is: %f \n",total);
    return 0;

}

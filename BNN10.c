#include <stdio.h>
int main (){
int x , y,d1,d2,d3,answer1=0,answer2=0,answer3=0,A1=1,A2=1,A3=1,sum,answerT;
scanf("%d %d", &x ,&y);
while (x>100000 || y>100000 || x<1 || y<1){
    scanf("%d %d", &x,&y);
}
sum=x+y;
while (x>0){
    d1=x%10;
    if (d1==0)
            x=x/10; 
    else{ answer1=answer1+A1*d1; A1=A1*10; x=(x-d1)/10; }
}
while (y>0){
    d2=y%10;
    if (d2==0)
            y=y/10;
    else  { answer2=answer2+A2*d2; A2=A2*10; y=(y-d2)/10; }
}
while (sum>0){
    d3=sum%10;
    if(d3==0)
            sum=sum/10;
    else {  answer3=answer3+A3*d3; A3=A3*10; sum=(sum-d3)/10; }
}
answerT=answer1+answer2;
printf("%d \n",answer3);
if (answer3==answerT) printf("YES");
else printf("NO");

return 0;
}
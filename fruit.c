#include<stdio.h>
int main()
{
int x[99][3],m;
float w[5]={0};
float y=0,yl,y2;
float dw[3];
float l=0.25;
printf("The following convention needs to be used:\nTaste: Sweet=1 Not sweet=0\nSeeds: Edible=1 Not edible=0\nSkin Edible=1 Not edible=0");
printf("\nThis is the training session:\n");

printf("The question session is going to start\nEnter the three qualities of the fruit in question\n");
int x1,x2,x3;
for(int i=1;1==1;i++)
{
y=0;
for(int j=1;j<=3;j++)
{
printf("The weights are %f %f %f\n",w[1],w[2],w[3]);
printf("\nEnter the %dth quality of the %dth fruit: ",j,i);
scanf("%d",&x[i][j]);
printf("\nThe number entered is %d",x[i][j]);
y=y+(w[j]*x[i][j]);
if(y>0.4)
y2=1;
else
y2=0;
}
printf("\nThe obtained value of the %dth fruit is : %f hence the output is %f",i,y,y2);
printf("\nEnter the actual value of the %dth fruit :",i);
scanf("%f",&yl);
printf("%f and %f",y,yl);

if (y2 != yl)
{
for(int j=1;j<=3;j++)
{
printf("The weight is :%f\n",w[j]);
dw[j]=(yl-y2)*x[i][j]*l;
printf("l=%f",l);
w[j]=w[j]+dw[j];
printf("Now the weight is :%f\n",w[j]);
}
}
else
printf("The output of the computer and user matched we go on to the next fruit\n");
printf("Do you want to stop the training (Y/N) : \n");
int dec;
printf("Enter 1=Learning to continue and 0=Learning to stop\n");
scanf("%d",&dec);

if(dec==0)
break;
}
//this is the weights for a sample of 10 fruits for future use
//w[1]=0.5;
//w[2]=-0.25;
//w[3]=0.25;
while(1==1)
{
printf("Enter the qualities of the Testing fruit:\n");
scanf("%d %d %d",&x1,&x2,&x3);
y=w[1]*x1+w[2]*x2+w[3]*x3;
if(y>0.4)
printf("The answer is 1 hence the fruit is good\n");
else
printf("The answer is 0 hence the fruit is bad");
printf("Do you want to continue testing...\nEnter 1: Continue     Enter 0:End Code\n");
scanf("%d",&m);
if(m==0)
break;
}
}


#include<stdio.h>
#define len 150
#define order 2
#define coeff 3

extern float a[coeff];
extern float b[coeff];
extern float x[len];
void main()
{
float y[len]={0};
float x_buffer[coeff];
float y_buffer[coeff];
int i,j,m;
// initialize buffer to zero //
for(i=0;i<=order;i++)
{
x_buffer[i]=0;
y_buffer[i]=0;
}
// 2nd order implementation //
for(i=0;i<len;i++)
{
   x_buffer[0]=x[i];
   y_buffer[0]=0;
   for(j=0;j<=order;j++)
   {
   if(i-j>=0)
   {
   y_buffer[0]+=b[j]*x_buffer[j];
   if(j>0)
   y_buffer[0]-=a[j]*y_buffer[j];
   }
   }
   y[i]=y_buffer[0];
   for(j=order;j>0;j--)
   x_buffer[j]=x_buffer[j-1];
   for(j=order;j>0;j--)
   y_buffer[j]=y_buffer[j-1];
}
m=0;
}       






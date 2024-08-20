#include <stdio.h>
#include <conio.h>
#include<limits.h>
#include<float.h>

int main()
{
printf("min value of int=%d\n",INT_MIN);
printf("max value of int=%d\n",INT_MAX);
printf("min value of float=%f\n",FLT_MIN);
printf("max value of float=%f\n",FLT_MAX);
printf("min value of long=%ld\n",LONG_MIN);
printf("max value of long=%ld\n",LONG_MAX);
printf("min value of short=%d\n",SHRT_MIN);
printf("max value of short=%d\n",SHRT_MAX);
printf("min value of double=%le\n",DBL_MIN);
printf("max value of double=%le\n",DBL_MAX);
printf("min value of char=%d\n",CHAR_MIN);
printf("max value of char=%d\n",CHAR_MAX);
printf("one added to short max=%d\n",SHRT_MAX+1);

getch();
return 0;
}

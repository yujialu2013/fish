#include<stdio.h>
#include<time.h>

int main()
{
time_t mytime;
struct tm *mylocaltime;
mytime=time(NULL);
mylocaltime=localtime(&mytime);
printf("YEAR:%d\n,mylocaltime->tm_year+1900);
return 0;
}

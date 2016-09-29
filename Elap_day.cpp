#include<cstdio>
#include<string.h>
#include<stdlib.h>
#include "class.h"

using namespace std;
int prompt()
{
        int i;
        char buf[10];
        fgets(buf,sizeof(buf)-1,stdin);
        i=atoi(buf);
}
	
main()
{
	elap num;
	
	int day,month,year;
	int elapsed_d=0,i;

	int norm_year[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int leap_year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

	printf("enter your year: ");
        year=prompt();

	while(year < 1975 || year > 2050)
        {
        printf("%d is out of range[1975 - 2050] \nplease re enter y: ",year);
        year=prompt();
        }

	printf("enter your month: ");
        month=prompt();
	
	while(month <1 || month > 12)
        {
        printf("%d is an invalid month [1-12] only \nplease re enter y: ",month);
        month=prompt();
        }

	printf("enter your day: ");
        day=prompt();

	printf("%d %d %d \n",day,month,year);

	if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
                for ( i = 0 ; i < month - 1;i++)
                          elapsed_d += leap_year[i];
                elapsed_d +=day;
        }
     else
        {
                for ( i = 0 ; i < month - 1;i++)
                          elapsed_d += norm_year[i];
                elapsed_d +=day;
        }

	printf("days elapsed = %d \n",elapsed_d);
}

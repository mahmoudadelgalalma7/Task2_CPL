#include <stdio.h>

int main () {
	int s;
	int h,m;
	printf("Enter  the number of Seconds you want to convert: ");
	//Input Num
	scanf("%d", &s);
	h = s / 3600;
	//Print H
	printf("Hours: %d \n",h);
	m = ((float)s / 3600 - h)*60;
	//Print M
	printf("Minutes: %d \n",m);
	s = s-(h*3600+m*60);
	//Print S
	printf("Seconds: %d",s);
	return 0;
}

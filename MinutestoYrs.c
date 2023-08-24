/*Date: 2023.06.03
Purpose: Convert a number of minutes to days and years*/

#include <stdio.h>


int main() {

	int minutes;
	double days, years;

	// user input in minutes
	printf("Please enter the number of minutes you want to convert to days and years! \n");
	scanf_s("%d", &minutes);

	//calculation

	days = (double)(minutes / 60) / 24; //cast to decical number
	years = days / 365;

	printf("%f days and %f years.", days, years);
	
	return 0;
	
}
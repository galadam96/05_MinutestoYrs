/*Date: 2021.08.01
  Purpose: Converts user input minutes to years and days */


#include <stdio.h>

int main()
{
    printf("Mennyi percet valtsak at evre es napra? \n");
    int min = 0;
    scanf("%d", &min);
    printf("Beadott ertek: %d", min);
    // Átváltás beadott intet floatra explicitás miatt.
    float lebegomin = (float)min;
    float hrs = (lebegomin/60);
    float day = (hrs/24);

    float yrs = (day/365);
    //Átváltani (castolni floatokat intbe)
    int egeszyrs = (int)yrs;
    int egeszday = (int)day;
    int resday = (egeszday%365);

    printf("Ev: %d Nap: %d",egeszyrs,resday);

    return 0;
}

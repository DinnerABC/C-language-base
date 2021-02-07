#include <stdio.h>
 
int main()
{
    int speed,lim;
    double exceed;
    scanf("%d %d",&speed,&lim);
    
    exceed=(double)(speed-lim)*100/(double)lim;
    
	if(exceed<10 || speed<lim)
        printf("OK");
    else if(exceed<50)
        printf("Exceed %.0f%%. Ticket 200",exceed);
    else
        printf("Exceed %.0f%%. License Revoked",exceed);
        
    return 0;
}

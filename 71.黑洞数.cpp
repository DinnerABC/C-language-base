#include<stdio.h>  
int main(){  
    int max,min,num,f=0,bai,shi,ge,t;  
    scanf("%d",&num);  
   
    while(num!=495||f==0){   
        bai=num/100;
		ge=num/10%10;
		shi=num%10;  
        if(bai<shi){
			t=bai;
			bai=shi;
			shi=t;
		} 
        if(bai<ge){
			t=bai;
			bai=ge;
			ge=t;
		}  
        if(shi<ge){
			t=shi;
			shi=ge;
			ge=t;
		}  
		
        max=bai*100+shi*10+ge; min=bai+shi*10+ge*100;  
        num=max-min;
		f++;  
        printf("%d: %d - %d = %d\n",f,max,min,num);  
    }  
    return 0;  
}   

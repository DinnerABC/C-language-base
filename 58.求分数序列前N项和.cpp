#include<stdio.h> 
int main(void){
 	int i,n; 
 	double fenzi=2,fenmu=1,sum=0,item;
 	scanf("%d", &n);
 	
	 for(i=0;i<n;i++){
 		sum+=fenzi/fenmu;
 		item=fenzi;
 		fenzi=fenzi+fenmu;
 		fenmu=item;
 	}
 	
 	printf("%.2lf",sum);
	return 0;
}

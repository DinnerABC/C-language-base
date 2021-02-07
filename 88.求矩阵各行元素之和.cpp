#include<stdio.h>  
int main(void){  
    int m, n, a[6][6],i,j,sum=0;  
    scanf("%d %d",&m,&n);
    for (i=0;i<m;i++){  
        for (j=0;j<n;j++){  
            scanf("%d ", &a[i][j]);  
        }  
        scanf("\n");
    }
    for (i = 0; i < m; i++){  
      sum=0;
      for (j = 0; j < n; j++){
        sum=sum+a[i][j];
      }  
      printf("%d\n",sum);
    }
    return 0;
} 

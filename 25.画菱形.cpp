//刘文正 输出菱形 

#include<stdio.h>
int main(void)

{
	int i,j,n;  //设置变量 
	scanf("%d",&n);  //输入数字为行数 
	
	if(n%2==0){  //如果输入数字为偶数 
	
		for(i=0;i<n/2;i++){  //循环一半次数，打印菱形上半部分三角形 
		
			for(j=0;j<n-i;j++){  //第n行输出空格数 
				printf(" ");
			}
		
			for(j=0;j<2*i+1;j++){  //第n行输出*数 
				printf("*");
			}
		
			printf("\n");  //换行 
		}

		for(i=0;i<n/2;i++){  //循环剩下一半次数，打印菱形下半部分三角形 
		
			for(j=0;j<n/2+1+i;j++){  //同上 
				printf(" ");
			}
		
			for(j=n;j>2*i+1;j--){  //同上 
				printf("*");
			}
		
			printf("\n");  //同上 
		}
	}
	else{  //如果输入数字为奇数 
		
		for(i=0;i<n/2+1;i++){  //循环一半加一次数，打印上半部分 
		
			for(j=0;j<n-i;j++){
				printf(" ");
			}
		
			for(j=0;j<2*i+1;j++){
				printf("*");
			}
		
			printf("\n");
		}
		
  /*  因为 int 的原因，两个数相除直接舍去小数部分。  */
  /*  n/2两个数都是整数，例如输入11，则11/2得到两个相同的数：5.因此上面为n/2+1，下面为n/2。  */ 
	
		for(i=0;i<n/2;i++){   //循环下一半。 
		
			for(j=0;j<n/2+2+i;j++){  //for语句中间的条件是我自己凑得。。反正达到了预期 
				printf(" ");
			}
		
			for(j=n-1;j>2*i+1;j--){
				printf("*");
			}
		
			printf("\n");
		}
	}
	return 0;
}

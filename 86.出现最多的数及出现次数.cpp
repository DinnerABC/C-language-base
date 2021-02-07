#include<stdio.h>
int main(void)
{
  int count=0,n,i,max=0,temp,time[10]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&temp);
    while(temp!=0){
      time[temp%10]++;
      temp/=10;
    }
  }
    for(i=0;i<10;i++){
      if(max<time[i]){
      
        max=time[i];
        count++;
      }
    }
  for(i=0;i<10;i++)
    if(time[i]==max)
      printf("%d ",i);
      printf("%d",count);

  printf("\n");
  return 0;
}


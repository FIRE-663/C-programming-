#include<stdio.h>
#include<stdlib.h>
int prime(int n)
{
int count=0;
  for(int I=1;I<=n;I++){
  if(n%I==0)
  {
  count++;
  }
  }
  if(count==2){
  return 1;
  }
  else{
  return 0;
  }
}
void n_prime(int n){
int count=0;
for(int I=2;count<n;I++)
{
if(prime(I)){
count++;
printf("%d ",I);

}
}
}
int main()
{
n_prime(5);
    return 0;
}

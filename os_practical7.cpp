#include<stdio.h>

int main(){
	
	int produce,consume,buffer[10],in,out,n=5;
	in=0,out=0;
	int count=0,choice=0;
	
  while(choice !=3)
  {
  	printf("1.Producer \t 2.Consumer \t 3.Exit \n");
  	printf("\n enter your choice :");
  	scanf("%d",&choice);
  	switch(choice){
  	case 1:
	  if(count==n)
	  printf(" \n Buffer si full !! ");
	  else
	  {
	  	printf(" \n enter the vlaue :");
	  	scanf("%d",&produce);
	  	buffer[in]=produce;
	  	in=(in+1)%n;
	  	count=count+1;
	  	printf("\n");
	  }
	  break;
	  
	  case 2:
	  	if(count==0)
	  	printf(" \n Buffer empty !!");
	  	else
	  	{
	  		consume=buffer[out];
	  		printf(" \n the consume value is %d ",consume);
	  		out=(out-1)%n;
	  		count=count-1;
	  		printf("\n");
	  		
		  }
  		
  		
	  }
  }
}

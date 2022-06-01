#include<stdio.h>
#define MAX 50
int main()
{
int page[MAX],n,i,f,pno,off,ps,choice;
printf(" \n Enter the  Number  page:");
scanf("%d",&n);
printf("\n Enter the page size : ");
scanf("%d",&ps); 
printf("\n Enter the number of frame :");
scanf("%d",&f);

for(i=0;i<n;i++)
page[i]= -1;

printf(" \n generat the page table");
printf("if the page is not present in frame the enter -1");
 printf("\n \t pageno frameno");
 for(i=0;i<n;i++)
 {
 	printf("\n\t%d ",i);
 	printf("\t");
 	scanf("%d",&page[i]);
 	
	 }	
	 do{
	 	printf("logical address (i.e page no & page offset)");
	 	scanf("%d%d",&pno,&off);
	 	if(page[pno]== -1)
	 	printf("requierd page is note present in frame");
	 	else{
	 		printf("physical address(i.e frame no & frame offset):%d ,%d",page[pno],off);
	 	printf("\ndo you want to continue(1/0)?:");
	 	scanf("%d",&choice);
		 }
	 	
	 }while(choice != 0);
	
	return 1;
}

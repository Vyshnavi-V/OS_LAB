#include<stdio.h>
int main()
{
 int np,nf,i,f=0,pfc=0;
 printf("Enter number of pages:");
 scanf("%d",&np);
 int ap[np];
 printf("Enter page numbers:\n");
 for(i=0;i<np;i++)
 {
 	scanf("%d",&ap[i]);
 }
 printf("Enter number of frames:");
 scanf("%d",&nf);
 int af[nf];
 for(i=0;i<nf;i++)
 {
 	af[i]=-1;
 }
 for(i=0;i<np;i++)
 {
	int c=0;
 	for(int j=0;j<nf;j++)
	{
		if(ap[i]==af[j])
		{
		     c=1;
			printf("%d\n",ap[i]);
			break;
		}
 	}
     if(c!=1)
	{
	 	af[f]=ap[i];
      	if(f+1<nf)
	 	{
			f=f+1;	
	 	}
	 	else
	 	{
			f=0;
	 	}
	 	pfc++;
		printf("%d\t",ap[i]);
	 	for(int k=0;k<nf;k++)
	 	{
			printf("%d ",af[k]);
	 	}
		printf("\n");
	}
 }
 printf("Page Fault is %d",pfc);
 return 0;
}

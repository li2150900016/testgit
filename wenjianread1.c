#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024
int main()
{
	int i,j=0;
	int a,b,c,d=0;
	int len1=0;
	char id[MAX_LINE];
	char addr[20]={0};
	char lei[20]={0};
	char day[20]={0};
	char time1[20]={0};
	FILE *f1 = fopen("D:/data.txt","r");            /*ÎÄ¼þÖ¸Õë*/
	if(!f1)
	{
		return 0;
	}
	while(!feof(f1))
	{
		i++;
		a=(i-1)/4;
		b=(i-2)/4;
		c=(i-3)/4;
		d=i/4-1;
		fscanf(f1,"%s",&id);
		if(i%4 == 1)
		{
			addr[a]=id;
		}
		if(i%4 == 2)
		{
			lei[b]=id;
		}
		if(i%4 == 3)
		{
			day[c]=id;
		}
		if(i%4 == 0)
		{
			time1[d]=id;
		}
		if(i==4001)
		{
			i=1;
		}
		len1=sizeof(addr);
		for(j=0;j<len1;j++)
		{
			printf("%s\n",addr[j]);
		}
	
	}

	fclose(f1);
	return 0;
}
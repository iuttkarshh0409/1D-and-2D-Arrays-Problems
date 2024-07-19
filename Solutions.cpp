#include<stdio.h>
int main()
{
	int i,j,temp,n,list[77],lar_no,sma_no,neg_no[77],pos_no[77],even_no[77],odd_no[77],prime_no[77],comp_no[77],sq_list[77],cube_list[77],fact_list[77];
	printf("\n enter the max elements to be entered in the list:\n");
	scanf("%d",&n);
	printf("\n enter elements to be displayed in the list:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("\n the list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",list[i]);
	}
	lar_no=sma_no=list[0];
	for(i=0;i<7;i++)
	{
		neg_no[i]=0;
		pos_no[i]=0;
		even_no[i]=0;
		odd_no[i]=0;
		prime_no[i]=0;
		comp_no[i]=0;
	
	
	}
	for (i=0;i<n;i++)
	{
		if (list[i]>lar_no)
		lar_no=list[i];
		else
		if (list[i]<sma_no)
		sma_no=list[i];
		if (list[i]<0)
		neg_no[i]=list[i];
		if (list[i]>0)
		pos_no[i]=list[i];
		if (list[i]%2==0)
		even_no[i]=list[i];
		else
		if(list[i]%2!=0)
		odd_no[i]=list[i];
		sq_list[i]=list[i]*list[i];
		cube_list[i]=list[i]*list[i]*list[i];
		fact_list[i]=1;
	}
	printf("\n largest number is the list is:%d\n",lar_no);
	printf("\n smallest number in the list is:%d\n",sma_no);
	printf("\n negative numbers in the list are:\n");
	for(i=0;i<n;i++)
	{
		if(neg_no[i]<0)
		printf("%d\t",neg_no[i]);
	}
	printf("\n positive numbers in the list are:\n");
	for(i=0;i<n;i++)
	{
		if(pos_no[i]>0)
		printf("%d\t",pos_no[i]);
	}
	printf("\n even numbers in the list are:\n");
	for(i=0;i<n;i++)
	{
		if(even_no[i]==list[i])
		printf("%d\t",even_no[i]);
	}
	printf("\n odd numbers in the list are:\n");
	for(i=0;i<n;i++)
	{
		if(odd_no[i]==list[i])
		printf("%d\t",odd_no[i]);
	}
	j=n-1;
	i=0;
	while(i<j)
	{
		temp=list[i];
		list[i]=list[j];
		list[j]=temp;
		j--;
		i++;
		}
		printf("\n the list in reverse order is:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",list[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<=n-1;j++)
			{
				if (list[i]>list[j])
				{
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
		printf("\n the list in ascending order is:\n");
		for(i=0;i<=n-1;i++)
		{
			printf("%d\t",list[i]);
		}
			for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<=n-1;j++)
			{
				if (list[i]<list[j])
				{
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
		printf("\n the list in descending order is:\n");
		for(i=0;i<=n-1;i++)
		{
			printf("%d\t",list[i]);
		}
		printf("\n square of the elements of the list are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",sq_list[i]);
		}
		printf("\n cube of the elements of the list are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",cube_list[i]);
	 }
    return 0;
}


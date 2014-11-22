#include <stdio.h>

void PrintOutArray(int *a,int n)
{
	int i;
	for(i = 0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void Swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort1(int *a,int n)
{
	int i,j;
	for(i = 0; i< n-1;i++)
		for(j = 0 ;j<n-i-1 ; j++ )
			if(a[j] > a[j+1])
			{
				Swap(&a[j],&a[j+1]);
			}	
}

void BubbleSort2(int *a, int n)
{
	int i,j;
	int flag = 1;
	while(flag)
	{
		flag = 0;
		for(i=0 ; i< n-1; i++)
			for(j=0; j< n-i-1;j++)
				if(a[j]>a[j+1])
				{
					Swap(&a[j],&a[j+1]);
					flag = 1;
				}
	}
}

void BubbleSort3(int *a, int n)
{
	int i,k;
	int flag =n;
	
	while(flag > 0)
	{
	  
     	k = flag;  
        flag = 0;  
        for (i = 0; i < k-1; i++)  
            if (a[i] > a[i+1])  
            {  
                Swap(&a[i], &a[i+1]);  
                flag = i+1;  
            }  
     
	}
}

int main()
{
	const int MAXN = 10;  
    int a[MAXN] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};  
    //BubbleSort1(a, MAXN); 
	//BubbleSort2(a, MAXN);
	BubbleSort3(a, MAXN); 
    PrintOutArray(a, MAXN);  
    return 0;  
	
}



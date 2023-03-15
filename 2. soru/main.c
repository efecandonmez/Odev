#include <stdio.h>
#include <stdlib.h>


			
	int find_min(int arr[], int n) 
	{
    int min_num=arr[0];
    for (int i=1;i<n;i++) 
	{
        if (arr[i]<min_num) 
		{
            min_num=arr[i];
        }
    }
    return min_num;
	}

int main() {
     	
    printf("Efe Can Donmez - 1220505047\n\n");

	int arr[]={63,7,4,1,13,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=find_min(arr,n);
    printf("Dizideki en kucuk eleman: %d",min);
    return 0;
}
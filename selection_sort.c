#include<stdio.h>
#include<string.h>

int main()
{
    int arr[]={7,4,6,3,34,9};
    int t=0,i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 6; j++)
        {
            if (arr[i]<arr[j]) //here relational operator will decide data in ascend or descnd.
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
        
    }
        for ( i = 0; i <6; i++)
        {
            printf("%d\n",arr[i]);
        }
            

        return 0;
}

#include<stdio.h>
#include<string.h>

void main()
{
    int arr[]={4,7,8,10,13,20,21};
    int f=0,s,i,low=0,high=7,mid=0;
    
    puts("Enter the data to be search");
    scanf("%d",&s);
    for (i = 0; i <6; i++)
    {
        
        mid=(low+high)/2;
        if (arr[mid]==s)
        {
            f=1;
            puts("Data Found");
            printf("Index of array where data is--%d\n",mid);
            
            break;
        }
        else {
            if (s>arr[mid])
            {
                low=mid+i;
             }
             else{
                high=mid-i;
             }
        }
        
    }
    if (f==0)
    {
        puts("Data not found");
    }
    
    
            
}
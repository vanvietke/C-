#include <stdio.h>
// sort array from smallest to largest
// List how many times the elements appear

void main()
{
    int array[] = {1,7,9,3,7,1,2,6,7,8,2,9,9,3};
    int n = sizeof(array)/sizeof(array[0]);
    int i,j,temp,count;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])  //Check the previous variable > the following variable
            {
                temp=array[i];
                array[i]=array[j]; // Reverse the position of 2 variables
                array[j]=temp;
            }
        }
    }

    printf("Wear after waxing:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    printf("Compare the performance of the phantoms:\n");
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%d appear %d time\n",array[i],count);
            i+=count-1;
        }
    }
}

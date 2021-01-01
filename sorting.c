#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,*arr,i,j,temp;
    printf("Enter the range:");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    //Entering data into array

     for(i=0;i<n;i++)
     {
     	printf("Enter the data:\n");
        scanf("%d",&arr[i]);  //Taking input
     }

    //Displaying data entered

     for(i=0;i<n;i++)
     {
         printf("arr[%d] = %d \n",i,arr[i]); //displaying data
     }

     //Sorting obtained data

      for(i=0;i<n;i++)
      {
          for(j=i;j<n;j++)
          {
            if(arr[i]>arr[j])
             {
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
             }
        }
      }


     //Displaying sorted data

     for(i=0;i<n;i++)
     {
         printf("sorted data:%d \n",arr[i]);
     }

return 0;
}

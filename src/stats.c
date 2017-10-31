#include <stdio.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)

void main() {           /*main entry point */

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
 	unsigned char median=find_median(test,SIZE);
 	double mean=find_mean(test,SIZE);
 	unsigned char maximum=find_maximum(test,SIZE);
 	unsigned char minimum=find_minimum(test,SIZE);
/* Statistics and Printing Functions Go Here */
	print_statistics(median,mean,maximum,minimum);// print an array including minimum , maximum,mean,and median
    printf("INITIAL ARRAY\n");
		print_array(test,SIZE);
	sort_array(test,SIZE);    //sort array from largest  to smallest
    
} 

/**********
find the  mean
**********/
  double find_mean(unsigned char data[],unsigned char size)
{
  int i;
  int sum=0;
  for(i = 0; i<size; i++)
    {
      sum=sum+data[i];
      }
     
  return sum/size;
}


/**********
find the  median 
***********/
unsigned char find_median(unsigned char data[],unsigned char size )
 {
   
    if (size%2==0)
       {
        return (data[size/2]+data[size/2+1])/2;
        }
    else
        return data[(size+1)/2];

 }

/***********
find the maximum
************/
unsigned char find_maximum(unsigned char data[],unsigned char size )
{
        unsigned char i,maxi=data[0];
        for(i=1;i<size;i++)
        {
           if( maxi<data[i])
           {
           maxi=data[i];
           }

        }
  return maxi;
}
/*************
find the  minimum
***************/
 unsigned char find_minimum(unsigned char data[],unsigned char size)
{
  int mini=1000;
  int temp=1000;
  int i;
  for(i=0;i<size;i++)
  {
    if(data[i]<temp)
    {
       temp=data[i];
    }
    mini=temp;
   }
 return mini;
}
/**************
print minimum,maximum,mean,and median
***************/
void print_statistics(unsigned char median, double mean,unsigned char maximum,unsigned char minimum )
{
	printf("The maximum is %d\n",maximum);
	printf("The minimum is %d\n",minimum);
 	printf("The mean is %f\n",mean);
 	printf("The median is %d\n",median);



}

/**************
sort array from largest to the smallest 
*************/
void sort_array(unsigned char data[],unsigned char size)
{
unsigned int array[size];
	int i,j;
	for(i=0;i<size;i++)
	{
		array[i]=data[i];
	}

 // print the input  array 
printf("\nPrint the array of data in line:\n");
  for (i=0;i<size;i++)
	{
		if(i!=size-1)
			printf("%d, ",array[i]);
		else
			printf("%d, ",array[i]);
   }
   
   for (i=size-2;i>=0;i--)
   {
   	for(j=0;j<=i;j++)
   	   {
   		if(array[j]<array[j+1])
   		   { 
   		 	int temp;
   		 	temp=array[j];
   		 	array[j]=array[j+1];
   		 	array[j+1]=temp;
		  
		   }
	   }
   }
		
	printf("\n After Sort Array\n");
	for (i=0;i<size;i++)
	{
		printf("array[%d]=%d\n",(i+1),array[i]);
	
	}
}

	
	

/**************
Print the array to the screen
***************/
void print_array(unsigned char data[],unsigned char size)
{
    int i,j;
    printf("\n****print the origin array ****\n");

	for(i=0;i<size;)
		{
			for(j=0;j<8;j++)
				{
	  			 printf("%d ",data[i]);
	   				i++;	
	   
	           }
	        printf("\n");

        }  
 }




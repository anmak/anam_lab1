#include<iostream>
#include <fstream>
#include <string>
#include "functionality.h"
using namespace std;

// function declaration
void first_unit_test(); // add matrix
void second_unit_test(); // multiply matrix 
void third_unit_test(); // add and multiply
void fourth_test(); // subtract matrix
   

int main()
{
	//  while loop for unit testing
	while(1)
	{
	int a=0;
	printf("\tMATRIX CALCULATOR \t\n");
	printf("\nTo add three matrix press 1 \nTo multiply matrix press 2 \nTo multiply and add matrix press 3\nTo subtract matrix press 4 \n");
	cin>>a;

	// taking user inputs and calling the test 
	if(a==1)
	{
		printf("\nUNIT TEST TO ADD THREE MATRIX IS AS FOLLOWES\n");
	    first_unit_test();
	}

	if(a==2)
	{
	printf("\nUNIT TEST TO MULTIPLY TWO MATRIX IS AS FOLLOWES\n");
	second_unit_test();
	}
	if(a==3)
	{
	printf("\nUNIT TEST TO MULTIPLY TWO MATRIX AND ADD THIRD ONE \n");
	third_unit_test();
	}

	if(a==4)
	{
	printf("\n SUBTRACT TWO MATRIX  \n");
	fourth_test();
	}
	
	}
	return 0;
}



void fourth_test()
{


//reading from file
	int n1 =2;
	int m1=2 ;
	int n2 =2;
	int m2=2 ;
	

	



	
	int i = 0; int j = 0;
	int a = 0;

	
	ifstream is("example.txt");
	char c;

	// getting order of the matrices 
	while (is.get(c))         
	{

		
		if (c == '.')
		{

         i++; 
		 j = 0;
		}

		else if(c == '?' )
		{ 
			if(a==0)
			{
			n1=i+1;
			m1=j;
			}

			if(a==1)
			{
			  break;
			}

			

			i = 0;
			j = 0;

			a++;

			
		
			
		
		 }

			else if (isdigit(c))
			
			{
				if (a == 0)
				{
					
				}

				else if (a==1)
				{

					
				}

				else if (a==2)
				{

					
				}

				
				
				j++;

			}

		}

n2=i+1;
m2=j;
	
// array for storing matrix and their sum
	int** array1 = new int*[n1];
for(int i = 0; i < n1; i++)
    array1[i] = new int[m1];

int** array3 = new int*[n2];
for(int i = 0; i < n2; i++)
    array3[i] = new int[m2];


int** sub = new int*[n2];
for(int i = 0; i < n2; i++)
    sub[i] = new int[m2];





 a=0;
 i=0;
 j=0;

 // file opening to get the input fromthe file
ifstream file("example.txt");
	char c1;
	while (file.get(c1))         
	{

		
		if (c1 == '.')
		{

         i++; j = 0;
		}

		else if(c1 == '?' )
		{ 
			i = 0;
			j = 0;
			
			a++;
			if(a==2)
			{break;}
		
		 }

			else if (isdigit(c1))
			
			{
				if (a == 0)
				{
					array1[i][j] = int(c1 - '0'); // saving elements in the array
					
				}

				 else if (a==1)
				{

					array3[i][j] = int(c1 - '0'); // saving elements in the array
					

				}

				


				
				j++;

			}

		}
	
	int l, d;
		
	// printing the read matrix from the file
	printf("\nThe two arrays for subtraction are\n");

	printf("\nFIRST ARRAY\n");
	for (l = 0; l < n1; l++)
	{
	for (d = 0; d < m1; d++)
	{  cout<<array1[l][d];
	   printf(" ");
	}

    printf("\n");
	}
	
	printf("\nSECOND  ARRAY\n");
	
	for (l = 0; l < n2; l++)
	{
		for (d = 0; d < m2; d++)
		{
			cout<<array3[l][d];
			 printf(" ");
		}
 printf("\n");
	}

	// checking the order of the matrix before calling test
	if(n1==n2 && m1==m2)
	{
	   sub1(array1,array3,sub,n1,m1);

	    printf("\nSUBTRACTION IS \n");

		int c1;

			   for (c1 = 0; c1 < n1; c1++)
		   {
	        for (d = 0; d < m1; d++)
		     { 
				 cout<< sub[c1][d];
				 printf(" ");
			 }

			printf("\n");

		   }

	
	}
	else
	{
	   printf("\nMatrix Subtraction not possible\n");
	
	}
	
	



}

void third_unit_test()
{
	//reading from file
	int n1 =2;
	int m1=2 ;
	int n2 =2;
	int m2=2 ;
	int n3 =3;
	int m3=3 ;

	



	
	int i = 0; int j = 0;
	int a = 0;

	
	ifstream is("example.txt");
	char c;

	// getting order of the matrices 
	while (is.get(c))         
	{

		
		if (c == '.')
		{

         i++; 
		 j = 0;
		}

		else if(c == '?' )
		{ 
			if(a==0)
			{
			n1=i+1;
			m1=j;
			}

			if(a==1)
			{
			  n2=i+1;
			  m2=j;
			}

			if(a==2)
			{
			  
			  break;
			}

			i = 0;
			j = 0;

			a++;

			
		
			
		
		 }

			else if (isdigit(c))
			
			{
				if (a == 0)
				{
					
				}

				else if (a==1)
				{

					
				}

				else if (a==2)
				{

					
				}

				
				
				j++;

			}

		}

n3=i+1;
m3=j;
	
// declaring 2d arrays to store the matrix
	int** array1 = new int*[n1];
for(int i = 0; i < n1; i++)
    array1[i] = new int[m1];

int** array3 = new int*[n2];
for(int i = 0; i < n2; i++)
    array3[i] = new int[m2];


int** mul = new int*[n1];     // array store the product
for(int i = 0; i < n1; i++)
    mul[i] = new int[m2];

int** array2 = new int*[n3];   // array store the final result
for(int i = 0; i < n3; i++)
    array2[i] = new int[m3];



 a=0;
 i=0;
 j=0;
 // getting input from the file
ifstream file("example.txt");
	char c1;
	while (file.get(c1))         
	{

		
		if (c1 == '.')
		{

         i++; j = 0;
		}

		else if(c1 == '?' )
		{ 
			i = 0;
			j = 0;
			
			a++;
			if(a==3)
			{break;}
		
		 }

			else if (isdigit(c1))
			
			{
				if (a == 0)
				{
					array1[i][j] = int(c1 - '0'); // saving in array
					
				}

				 else if (a==1)
				{

					array3[i][j] = int(c1 - '0'); // saving in array
					

				}

				else if (a==2)
				{

					array2[i][j] = int(c1 - '0'); // saving in array
					

				}


				
				j++;

			}

		}
	
	int l, d;
		
	// printing arrays
	printf("\nThe three arrays for addition are\n");

	printf("\nFIRST ARRAY\n");
	for (l = 0; l < n1; l++)
	{
	for (d = 0; d < m1; d++)
	{  cout<<array1[l][d];
	   printf(" ");
	}

    printf("\n");
	}
	
	printf("\nSECOND  ARRAY\n");
	
	for (l = 0; l < n2; l++)
	{
		for (d = 0; d < m2; d++)
		{
			cout<<array3[l][d];
			 printf(" ");
		}
 printf("\n");
	}


	printf("\nTHIRD ARRAY\n");
	
	for (l = 0; l < n3; l++)
	{
		for (d = 0; d < m3; d++)
		{
			cout<<array2[l][d];
			 printf(" ");
		}
 printf("\n");
	}

// checking the m X nrule for matrix multiplication	
	if(m1==n2)

	{
	   // calling the test
		multiply(array1, array3,mul,n1 , m2,n2);

		
		// adding the result to the third array

		   if(n1==n3 && m2==m3)
		   {
		   
		      sum1(mul,array2,array1,n1 , m2);

			  // printing answer
			  printf("\nANS is \n");
			   for (c = 0; c < n1; c++)
		   {
	        for (d = 0; d < m2; d++)
		     { 
				 cout<< array1[c][d];
				 printf(" ");
			 }

			printf("\n");

		   }


		   
		   }

		   else
		   {
			   // exception handling
		      printf(" \nOperation  is not possible !! ORDER IS NOT COMPATIBLE\n");  
		   }
	
	}

	else
	{      // exception handling
	      printf(" \nOperation  is not possible !! ORDER IS NOT COMPATIBLE\n");   
	         
	}





}



void second_unit_test()
{

	int n1 =2;
	int m1=2 ;
	int n2 =2;
	int m2=2 ;
	
	



	
	int i = 0; int j = 0;
	int a = 0;

	
	ifstream is("example.txt");
	char c;

	// getting order of the matrices 
	while (is.get(c))         
	{

		
		if (c == '.')
		{

         i++; 
		 j = 0;
		}

		else if(c == '?' )
		{ 
			if(a==0)
			{
			n1=i+1;
			m1=j;
			}

			if(a==1)
			{
			
			  break;
			}

			
			i = 0;
			j = 0;

			a++;

			
		
			
		
		 }

			else if (isdigit(c))
			
			{
				if (a == 0)
				{
					
				}

				else if (a==1)
				{

					
				}

				j++;

			}

		}

 n2=i+1;
 m2=j;



	
// arrays formatrix multiplication
	int** array1 = new int*[n1];
for(int i = 0; i < n1; i++)
    array1[i] = new int[m1];

int** array3 = new int*[n2];
for(int i = 0; i < n2; i++)
    array3[i] = new int[m2];


int** mul = new int*[n1];
for(int i = 0; i < n1; i++)
    mul[i] = new int[m2];

 a=0;
 i=0;
 j=0;

 // getting input from the file
ifstream file("example.txt");
	char c1;
	while (file.get(c1))         
	{

		
		if (c1 == '.')
		{

         i++; j = 0;
		}

		else if(c1 == '?' )
		{ 
			i = 0;
			j = 0;
			
			a++;
			if(a==2)
			{break;}
		
		 }

			else if (isdigit(c1))
			
			{
				if (a == 0)
				{
					array1[i][j] = int(c1 - '0');
					
				}

				 else if (a==1)
				{

					array3[i][j] = int(c1 - '0');
					

				}

				


				
				j++;

			}

		}
	
	int l, d;
		
// printing arrays
	printf("\nThe two arrays for multiplication are\n");

	printf("\nFIRST ARRAY\n");
	for (l = 0; l < n1; l++)
	{
	for (d = 0; d < m1; d++)
	{  cout<<array1[l][d];
	   printf(" ");
	}

    printf("\n");
	}
	
	printf("\nSECOND  ARRAY\n");
	
	for (l = 0; l < n2; l++)
	{
		for (d = 0; d < m2; d++)
		{
			cout<<array3[l][d];
			 printf(" ");
		}
 printf("\n");
	}

	// checking the order odf the matrix for multiplication

	if(m1==n2)

	{
	  
		printf(" \nMatrix multiplication is \n");
		// calling function
	   multiply(array1, array3,mul,n1 , m2,n2);

	   // printing result
		 int c ,d;
		   for (c = 0; c < n1; c++)
		   {
	        for (d = 0; d < m2; d++)
		     { 
				 cout<< mul[c][d];
				 printf(" ");
			 }

			printf("\n");

		   }
	
	}

	else
	{
	      printf(" \nMatrix multiplication is not possible !! ORDER IS NOT COMPATIBLE\n");   
	          
	}

}

void first_unit_test()

{

//reading from file
	int n1 =2;
	int m1=2 ;
	int n2 =2;
	int m2=2 ;
	int n3 =3;
	int m3=3 ;

	



	
	int i = 0; int j = 0;
	int a = 0;

	
	ifstream is("example.txt");
	char c;

	// getting order of the matrices 
	while (is.get(c))         
	{

		
		if (c == '.')
		{

         i++; 
		 j = 0;
		}

		else if(c == '?' )
		{ 
			if(a==0)
			{
			n1=i+1;
			m1=j;
			}

			if(a==1)
			{
			  n2=i+1;
			  m2=j;
			}

			if(a==2)
			{
			  
			  break;
			}

			i = 0;
			j = 0;

			a++;

			
		
			
		
		 }

			else if (isdigit(c))
			
			{
				if (a == 0)
				{
					
				}

				else if (a==1)
				{

					
				}

				else if (a==2)
				{

					
				}

				
				
				j++;

			}

		}

n3=i+1;
m3=j;
	
//declaring array for matrix
	int** array1 = new int*[n1];  
for(int i = 0; i < n1; i++)
    array1[i] = new int[m1];

int** array3 = new int*[n2];  
for(int i = 0; i < n2; i++)
    array3[i] = new int[m2];


int** sum = new int*[n2];
for(int i = 0; i < n2; i++)
    sum[i] = new int[m2];

int** array2 = new int*[n3];
for(int i = 0; i < n3; i++)
    array2[i] = new int[m3];



 a=0;
 i=0;
 j=0;

 // getting input from the file
ifstream file("example.txt");
	char c1;
	while (file.get(c1))         
	{

		
		if (c1 == '.')
		{

         i++; j = 0;
		}

		else if(c1 == '?' )
		{ 
			i = 0;
			j = 0;
			
			a++;
			if(a==3)
			{break;}
		
		 }

			else if (isdigit(c1))
			
			{
				if (a == 0)
				{
					array1[i][j] = int(c1 - '0');
					
				}

				 else if (a==1)
				{

					array3[i][j] = int(c1 - '0');
					

				}

				else if (a==2)
				{

					array2[i][j] = int(c1 - '0');
					

				}


				
				j++;

			}

		}
	
	int l, d;
		
	// printing arrays

	printf("\nThe three arrays for addition are\n");

	printf("\nFIRST ARRAY\n");
	for (l = 0; l < n1; l++)
	{
	for (d = 0; d < m1; d++)
	{  cout<<array1[l][d];
	   printf(" ");
	}

    printf("\n");
	}
	
	printf("\nSECOND  ARRAY\n");
	
	for (l = 0; l < n2; l++)
	{
		for (d = 0; d < m2; d++)
		{
			cout<<array3[l][d];
			 printf(" ");
		}
 printf("\n");
	}


	printf("\nTHIRD ARRAY\n");
	
	for (l = 0; l < n3; l++)
	{
		for (d = 0; d < m3; d++)
		{
			cout<<array2[l][d];
			 printf(" ");
		}
 printf("\n");
	}

	
	// checking the oder of the matrix
	if(n1==n2 && m1==m2)
	{
		sum1(array1, array3,sum,n1 , m1);
		// checking the oder of the matrix
		if(n1==n3 && m1==m3)
		{
			// calling the  addoperation
		   sum1(sum, array2,sum,n1 , m1);
		     printf("\nMatrix addition is as followes \n");
			 // printing array
		  int c ,d;
		   for (c = 0; c < n1; c++)
		   {
	        for (d = 0; d < m1; d++)
		     { 
				 cout<< sum[c][d];
				 printf(" ");
			 }

			printf("\n");

		   }


		}

		else
		{
		    printf("\nMatrix addition not possible.. ORDER NOT SAME \n");
			
		}

	}

	else 
	{
	   printf("\nMatrix addition not  possible ORDER NOT SAME \n");
	 
	}
	
	
	






}



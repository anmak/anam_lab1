#include<iostream>
#include <fstream>
#include <string>
using namespace std;

// sum operation
void sum1(int** first, int** second, int** sum, int n , int m )
{

	//adding matrix and saving the result in sum
	int c, d;

	printf("\n\n");
	for (c = 0; c < n; c++)
	{

		for (d = 0; d < m; d++)
		{
			sum[c][d] =first[c][d] + second[c][d] ;
			
		}

		
	}

	
	

}

// subtracting matrix
void sub1(int** first, int** second, int** sub, int n , int m )
{
	// result saved in sub
	
	int c, d;

	printf("\n\n");
	for (c = 0; c < n; c++)
	{

		for (d = 0; d < m; d++)
		{
			sub[c][d] =first[c][d] - second[c][d] ;
			
		}

		
	}

	
	

}




void multiply(int** first, int** second, int** mul, int n , int m ,int r )
{
	
	// multiply matrix and save result in mul 
	int c, d, k;
    int dummy = 0;
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < m; d++)//n,m, rare te order of the matrix
		{
			for (k = 0; k < r; k++)
			{
				dummy = dummy + first[c][k] * second[k][d]; // dumming variable assigning the ans
			}

			mul[c][d] = dummy;
			dummy = 0;
		}
	}
	
	
	

	
	
	

}











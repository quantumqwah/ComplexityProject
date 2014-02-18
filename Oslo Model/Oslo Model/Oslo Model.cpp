#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;


  
int main()
{
	const int L=50;
	int latt[L]={};
	int input=0;

	for( int c=0 ; c < 10000 ; c++)
	{
		 latt[0]++;
	
	for ( int i=0; i< L-1&&latt[i]!=0; i++)
	{
	  int zth= rand()%2+1;
	 
	  int z= latt[i]-latt[i+1];

	  if (z>zth)
	  {
		  latt[i]--;
		  latt[i+1]++;

	}
	}

	for (int j=0 ; j <L-1&&latt[j]!=0; j++)
	{
		cout << latt[j] << " ";
	}
		cout << endl;

	if(input<=0)
	{
	cin >> input;
	}
	input--;

	}


   
} 
    


	


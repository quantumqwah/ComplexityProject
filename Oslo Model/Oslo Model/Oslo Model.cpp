#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;


  
int main()
{

	for (int l=2; l<100 ; l++)
	{
		vector<int> latt(l,0);
		int input=0;

		for( int c=0 ; c < 10000 ; c++)
		{
			 latt[0]++;
	if(latt[l-1]!=0)

		break;	
		for ( int i=0; i< l-1&&latt[i]!=0; i++)
			{
			  int zth= rand()%2+1;
	 
			  int z= latt[i]-latt[i+1];

			  if (z>zth)
			  {
				  latt[i]--;
				  latt[i+1]++;

			}
			  
		    }
			
			

	for (int j=0 ; j <l&&latt[j]!=0; j++)
	{
		cout << latt[j] << " ";
	}
		cout << endl;

	if(input==0)
	{
	cin >> input;
	}
	input--;

	}


   
} 
    


	
	}
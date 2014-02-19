#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int z( vector<int> a, int i)
{
	return a[i]-a[i+1];
}


  
void heightOslo()
{

	for (int l=2; l<100 ; l++)
	{
		vector<int> latt(l,0);
		int input=0;

		for( int c=0 ; c < 10000 ; c++)
		{
			 latt[0]++;
	         if(latt[l]!=0)

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

void slopeOslo()
{
	int l=100;
	vector<int> z(l,0);
	int input=0;

	for( int c=0 ; c < 10000 ; c++)
	{
	    int zth= rand()%2+1;
		z[0]++;

			if(z[0] >zth)
			{
				z[0]=z[0]-2;
				z[1]=z[1]+1;

				for( int i=1; i< l-2; l++)
			   {
						if(z[i] >zth)
						{
							z[i]=z[i]-2;
							z[i+1]=z[i+1]+1;
							z[i-1]=z[i-1]+1;
						}

			   }

			}


	  z[l-1]=z[l-1]-1;
	  z[l-2]=z[l-2]+2;

	  for (int j=0 ; j <l; j++)
	{
		cout << z[j] << " ";
	}

	}





	/*if(input==0)
	{
	cin >> input;
	}
	input--;
	*/
	}



int main()
{
	int l=40;
	vector<int> z(l,0);
	int input=0;

	for( int c=0 ; c < 10000 ; c++)
	{
	    int zth= rand()%2+1;
		z[0]=z[0]+1;

			if(z[0] > zth)
			{
				z[0]=z[0]-2;
				z[1]=z[1]+1;

				for( int i=1; i<= l-2&& z[i]> zth; i++)
			   {

				
							z[i]=z[i]-2;
							z[i+1]=z[i+1]+1;
							z[i-1]=z[i-1]+1;

							z[i];
							z[i+1];

					

			   }

						if( z[l-1]>zth)
							{
							z[l-1]=z[l-1]-1;
						    z[l-2]=z[l-2]+1;
							}
				  for (int j=0; j<l; j++)
				  {
					cout << z[j] << " ";
				  }

				  cout<< endl;
	/*			  
	if(input==0)
	{
	cin >> input;
	}
	input--;*/
				}

			}


	








}
	


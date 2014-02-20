#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int z( vector<int> a, int i)
{
	return a[i]-a[i+1];
}





int main()
{
	int l=100;
	ofstream height("height vs time.txt");
	vector<int> z(l,0);
	vector<int> zth(l, 0);
	int input=0;
    
	for( int t=0 ;t < 1000 ; t++)
	{

		z[0]=z[0]+1;
		bool fullrelaxed=false;
		int checkifrelax=0;
		
		while(fullrelaxed==false)
		{
			for (int i=0;i<l;i++) 
	   {

		zth[i]=rand()%2+1;

	     }
			checkifrelax=0;	
			if(z[0] > zth[0])
				{
					z[0]=z[0]-2;
					z[1]=z[1]+1;

					checkifrelax++;
				}
						
					for( int i=1; i<= l-2; i++)
			   {
				
				            if(z[i] > zth[i])
							{
								z[i]=z[i]-2;
								z[i+1]=z[i+1]+1;
								z[i-1]=z[i-1]+1;
								checkifrelax++;
							}
					

			   }

				if( z[l-1] >zth[1-1])
				{
				      z[l-1]=z[l-1]-1;
					  z[l-2]=z[l-2]+1;
					  checkifrelax++;
				}

				
			

				if (checkifrelax==0)
				{
					fullrelaxed=true;
				}
				


				  
	

				
		}

		  int heightold=0; 
		  int heightnew=0;
				  

			for(int c=0; c<l; c++)
		{
			heightnew=z[c]+heightold;
			heightold=heightnew;
		}

			
				  
		/*	for (int j=0; j<l; j++)
		{
			//cout << z[j] << " ";
			//cout << t <<  '\t' << heightold<< endl;
			
		}

			cout<< endl;*/				
		height << t <<  '\t' << heightold<< endl;
	/*if(input==0)
	{
	cin >> input;
	}
	input--;*/
				}

	
}
	


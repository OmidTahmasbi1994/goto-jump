#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	const int N=5;
	
	for (int i=0; i<N; i++)
		{
			for (int k=0; k<N; k++)
				{
					for (int g=0; g<N; g++)
						
						if(i+k+g > N) goto esc;
						else cout<< i+k+g <<" ";
						cout<<" * ";
						
		
				}
		
		esc: cout<<" . "<<endl;
		}

	
	
	getch();
}

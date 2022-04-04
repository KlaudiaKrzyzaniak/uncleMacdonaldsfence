#include <iostream>
using namespace std;
int main()
{
	string initialString;  //entrance data
	int a;
	int b;
	int circuit;
	int area;
	int optimalArea;       //data for comparison
	int optimala;
	int optimalb;
	
	cout <<"Please enter RUN:"; // first step to start calculation
	cin >> initialString;		// user have to write RUN
		if(initialString!="RUN"){	// RUN is obligatory so lets start function IF
	
		cout<<"to proceed you have to write RUN";
		}
		else{
		cout <<"enter the length of the fence[meters]:\n";
		cin >> circuit; 

			if (circuit<3){
			cout<<"above data should be number bigger than 2" ;	// data vaidation
			}
			else
			{cout<<"number is correct\n";					//proper calculation
			a=1;
			b=circuit-2*a;              
	
			//cout <<"a:";
			//cout <<a<<endl;
	
			//cout <<"b:";
			//cout<< b<<endl;
		
				while(b>=1){								//loop assumption :width can't be smaller than 1
				area= a*b;										
						//cout << "area for a:";
						//cout <<a<<endl;
						//cout <<area<<endl;
					if(area>optimalArea){					// compare to new data
		
					optimalArea=area;							
					optimala=a;
					optimalb=b;
					}
					a=a+1;
					b= b-2;
		
				}
		cout <<"optimal Area [meters^2]:";				// data for user - data for the biggest area uncle Mcdonalds farm
		cout << optimalArea <<endl;
		cout <<"optimal a [meters]:";
		cout << optimala<<endl;
		cout <<"optimal b [meters]:";
		cout << optimalb <<endl;

			}                                    
		}

}
 	 
 
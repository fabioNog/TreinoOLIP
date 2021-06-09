#include <iostream>
#include <iomanip>

#include <cmath> 

using namespace std;   


int main()
{
	cout << std::fixed << std::setprecision(4);
	double n;
    double R,A;
    n = 3.14159;	
	
	cin >> R;

    A = n*R*R;
	
	cout << "A=" << A  << endl; 


	return 0;
}
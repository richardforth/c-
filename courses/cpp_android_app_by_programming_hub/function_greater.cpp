#include <iostream>
using namespace std;


int greaterOf(int num1, int num2) {    
	// local variable declaration    
	int result;      
	if (num1 > num2){       
		result = num1;    
	}    
	else{       
		result = num2;    
	}    
	return result;  
}


int main()
{
    cout << "The greater of 1 and 2 is: " << greaterOf(1, 2) << endl; 

    return 0;
}

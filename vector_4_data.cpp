#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v1(6);
	vector <int> v2{6};
	
	for(int i=0 ; i<v1.size() ; i++)
	 cout << v1.at(i) << " "; // 0 0 0 0 0 0 
	 	
	 cout << endl << endl;  
	 
	int *p;
	
	p = v1.data();
	
	*p = 1;  // 1 0 0 0 0 0 
	
	p[3]=7;  //1 0 0 7 0 0
	
	p++;
	
	*p=8;  //1 8 0 7 0 0
	
		for(int i=0 ; i<v1.size() ; i++)
	        cout << v1.at(i) << " ";
	        
	          cout << endl << endl;
	
	  for(int i=0 ; i<v2.size() ; i++)
	   cout << v2.at(i) << " ";   // 6
}

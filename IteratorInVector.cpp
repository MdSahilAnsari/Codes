
// C++ program to illustrate the
// iterators in vector
#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> g1;
  
    for (int i = 1; i <= 5; i++){
    	g1.push_back(i);
	}
        
  
    cout << "Output of begin and end: "<<endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
  
    return 0;
}

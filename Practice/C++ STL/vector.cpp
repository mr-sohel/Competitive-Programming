#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> vec;
	vector <int>::iterator it;
	//for(int i = 0; i < 5; i++) {
		//vec.push_back(i*2);
	//}
	vec.push_back(10);
	vec.push_back(352);
	vec.push_back(2);
	vec.push_back(25);
	vec.push_back(52);
	vec.push_back(48);
	
	//sort(vec.begin(), vec.end()); // to sort accending order .
	//sort(vec.rbegin(), vec.rend()); // to sort decending order.
	sort(vec.begin(), vec.begin() + 3); // to sort in a range . i am sorting first 3 element only.
	//vec.clear(); //for clear all the element of vector. 
	//vec.reverse(); for reverse the vector.
	for(it = vec.begin(); it != vec.end(); it++) { //for printing vector via iterator
		cout<< *it << " ";
	}
	puts(""); // for newline
	
	
	
	//for(int i = 0; i < (int) vec.size(); i++) { // for printing vector using array style
 		//cout<< vec[i] <<" ";
	//}  
	//int s; 
	//s = count(vec.begin(), vec.end(), 10); 
	//count() function count how many certain element has in the vector. it count how manay 10 in the vector.
	 
	//cout<<s;
	//it = vec.end(); // is not the last element it-- will be last element of vector.
	//it--;
	//cout<< "vec.end() "<< *it<<endl;
	
	
	return 0;
}

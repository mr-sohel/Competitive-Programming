#include <bits/stdc++.h>
#include <list>

using namespace std;

int main() 
{
	list <float> mylist;
	list <float>::iterator it;
	mylist.push_back(10);
	mylist.push_back(14);
	mylist.push_back(4);
	mylist.push_front(5); // you can push element in the front, which vector doesn't support.
	
	//cout<< mylist.size(); size of the list
	//array style print doesn't support [] this operator.
	//it = find(mylist.begin(), mylist.end(), 4); //find() search a certain element in the list and return its iterator if it find that element. 
	//cout<< *it <<endl;
	//mylist.insert(it, 7); to insert a element before iterator's current location.
	//mylist.clear(); //for clear all the element from list
	//mylist.reverse(); //it reverse the elements of list.
	//it =  mylist.begin();
	//mylist.erase(it); // to remove a element if iterator's location.
	for(it = mylist.begin(); it != mylist.end(); it++) { 
		cout<< *it <<endl; // 5 10 14 4
	}
	return 0;
}

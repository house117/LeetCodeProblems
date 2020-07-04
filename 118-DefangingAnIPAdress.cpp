#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address);


int main(int argc, char *argv[]) {
	
	cout<<defangIPaddr("1.1.1.1");
	
	
	return 0;
}

string defangIPaddr(string address){
	string dummy = "";
	for(int i=0; i<address.size();i++){
		
		if(address.at(i) == '.'){
			dummy.append("[.]");
		}else{
			dummy.push_back(address.at(i));
		}
	}	
	return dummy;
}
	



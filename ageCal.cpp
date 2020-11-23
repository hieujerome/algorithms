#include <iostream>
using namespace std;
int main(){
	int birthYear;
	int now;
	cout<<"Nhap vao nam sinh cua ban: ";
	cin>>birthYear;
	time_t Time = time(0);
	tm* Now = localtime(&Time);
	now = Now->tm_year +1900;
	cout<<"--------------------------------"<<endl;
	cout<<"Ban sinh nam: "<<birthYear<<endl;
	cout<<"Ban "<<now-birthYear<<" tuoi."<<endl;
	return 0;
}

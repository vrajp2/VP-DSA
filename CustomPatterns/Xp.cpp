#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(((i==1 || i==7) && (j==1 || j==7)) || ((i==2 || i==6) && (j==2 || j==6)) ||((i==3 || i==5) && (j==3 || j==5)) || (i==4 && j==4)){
				cout << "* ";
			} 
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
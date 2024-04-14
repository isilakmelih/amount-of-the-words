#include <iostream>
#include<cstring>
using namespace std;

int main(){
	char s[]="korkma sonmez bu safaklarda yuzen al sancak";
	int i,say=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			cout<<"bosluk"<<endl;
			continue;
		}else{
			say++;
		}
	}
	cout<<"the sum of words="<<say;}
	

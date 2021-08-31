#include<bits/stdc++.h>

using namespace std;
string maincard[100];//存卡组
int mainnum;//卡片数量计数器
string extracard[100];
int extranum;
string sidecard[100];
int sidenum;
void mobileini(string card[],int &num){
	num = 1;
	char ch;
	cin >> ch;
	for(;ch!='&'&&!cin.eof();cin >> ch){
		if(ch!='_'&&ch!='*') card[num].append(1,ch);//把同一张卡放进一个string
		else if(ch=='_') num++;//下一张卡
		else if(ch=='*'){//重复卡处理
			int times=0;
			cin >> times;
			for(int i=1;i<times;i++){
				num++;
				card[num]=card[num-1];
			}
		}
	}
}
void ygkprint(string card[],int n){
	for(int i=1;i<=n;i++){
		cout << card[i] << endl;
	}
}
void getuselesschar(int n){for(int i=1;i<=n;i++) getchar();}
int main(){
	freopen("mobile.txt","r",stdin);
	freopen("pro.ydk","w",stdout);
	getuselesschar(19);
	mobileini(maincard,mainnum);//主卡组处理
	getuselesschar(6);
	mobileini(extracard,extranum);
	getuselesschar(5);
	mobileini(sidecard,sidenum);
	cout << "#created by dk" << endl;
	cout << "#main" << endl;
	ygkprint(maincard,mainnum);
	cout << "#extra" << endl;
	ygkprint(extracard,extranum);
	cout << "!side" << endl;
	ygkprint(sidecard,sidenum);
}
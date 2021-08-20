#include<iostream>
using namespace std;

bool checkPythoTrip(int num1,int num2,int num3){
	int maxNum = max(num1,max(num2,num3));
    int chcek=(num1*num1)+(num2*num2)+(num3*num3)-(maxNum*maxNum);
    if (chcek==maxNum*maxNum){
        return true;
    }
    return false;
};

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int val=checkPythoTrip(a,b,c);

    if(val){
        cout<<"Pythogaras triplet";
    }
    else{
        cout<<"Not a pythogoras triplet";
    }
	

	return 0;
}
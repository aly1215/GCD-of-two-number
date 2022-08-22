//A.M.C.O
// Thank Me Later
//BSCS 2A
//program that determine the GCD of two integers


#include<iostream>

using namespace std;
int GCD(int num1, int num2);

int main(){
    int num1, num2;
    cout<<"Enter two integers: \n";
    cin>>num1;
    cin>>num2;

    int result = GCD(num1,num2);

    if(result)
        cout<<"GCD of "<<num1<< " and " <<num2<< " is " << result << endl;
    else
        cout << "Invalid input!!!!";
    return 0;
}


int GCD(int num1, int num2){
    if(num1 == 0 || num2 == 0){
       if(num1 == 0){
        return num1;
    }

    if(num2 == 0){
        return num2;
    }
}
if(num1%num2 != 0){
        int mod = num1%num2;
    return GCD(num2, mod);
}
else
{
    return num2;
}

}


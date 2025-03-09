#include <iostream>
using namespace std;

int main()
{

    long long t,a,b,c;;
    cin >> t;
    for(int i =1; i<=t; i++){
        cin >>a>>b>>c;

        if(a==b+c || b==a+c || c==a+b){
            cout << "YES"<<"\n";
        }
        else{
            cout << "NO"<<"\n";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, x=1, y=1, z;
    cin>>n;
    if (n<2){
        cout<<"errore"<<endl;
    }else{
        cout<<x<<endl;
        cout<<y<<endl;
        for (int i = 2; i<n ; ++i) {
            z= x+y;
            x=y;
            y=z;
            cout<<z<<endl;

        }
    }

    return 0;
}

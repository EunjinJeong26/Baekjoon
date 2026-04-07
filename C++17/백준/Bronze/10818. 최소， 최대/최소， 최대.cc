#include <iostream>
using namespace std;

int main(){
    int t, input;
    int min=1000001;
    int max=-1000001;

    cin>>t;

    for(int i=0; i<t; i++){
        cin>>input;
        if(input>max)
            max = input;
        if(input<min)
            min = input;
    }

    cout<<min <<" "<<max<<"\n";
    return 0;
}
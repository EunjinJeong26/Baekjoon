#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    int billMin, billMax;
    int walletMin, walletMax;
    
    if(bill[0]<bill[1]){
        billMin = bill[0];
        billMax = bill[1];
    } else if(bill[0]>bill[1]){
        billMin = bill[1];
        billMax = bill[0];
    } else{
        billMin = bill[0];
        billMax = billMin;
    }
    
    if(wallet[0]<wallet[1]){
        walletMin = wallet[0];
        walletMax = wallet[1];
    } else if(wallet[0]>wallet[1]){
        walletMin = wallet[1];
        walletMax = wallet[0];
    } else{
        walletMin = wallet[0];
        walletMax = walletMin;
    }
    
    while(billMin>walletMin || billMax>walletMax){
        billMax/=2;
        if(billMax<billMin){
            int temp = billMax;
            billMax = billMin;
            billMin = temp;
        }
        answer++;
    }
    
    
    return answer;
}
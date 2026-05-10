#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int size = common.size();
    int answer = 0;
    
    if(common[1]-common[0] == common[2]-common[1]){
        answer = common[size-1]+(common[1]-common[0]);
    } else{
        answer = common[size-1]*(common[1]/common[0]);
    }
    
    return answer;
}
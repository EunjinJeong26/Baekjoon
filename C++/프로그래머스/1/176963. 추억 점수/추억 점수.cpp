#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int nameSize = name.size();
    while(nameSize > yearning.size()){
        yearning.push_back(0);
    }
    
    int photoSize = photo.size();
    for(int i=0; i<photoSize; i++){
        int size = photo[i].size();
        answer.push_back(0);
        for(int j=0; j<size; j++){
            for(int k=0; k<nameSize; k++){
                if(photo[i][j]==name[k]){
                    answer[i]+=yearning[k];
                }
            }
        }
    }
    
    
    return answer;
}
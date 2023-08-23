#include <iostream>
#include <vector>
 
using namespace std;

int removeDuplicate(vector<int> &v){
    int save;
    int count=0;

    for(int i=0; i<v.size()-1; i++){
        if(save!=v[i]){
            count++;
        }
        save = v[i];
    }
    return count;
}


int main(){
    vector<int> v = {1,1,1,6};

    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<endl;

    int duplicate = removeDuplicate(v);
    cout<<"Duplicate: "<<duplicate<<endl;

}
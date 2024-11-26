#include <iostream>
#include <vector>

using namespace std; 

vector<int> tambah()
{
    return {1,2};
}

int main(){
    vector<int> b = tambah();

    for(int val:b){
        cout<<val<<endl;
    }
    for(int i = 0; i <= 1; i++){
        cout<<b[i]<<endl;
    }
    cout<<"text"<<endl;
    cout<<"test"<<endl;
}
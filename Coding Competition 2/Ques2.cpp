#include<iostream>
using namespace std;
void ans(int s, int t, int e){
    if(s>t && s>e){
        cout << "Setter";
    }
    if(t>s && t>e){
        cout << "Tester";
    }
    if(e>s && e>t){
        cout << "Editorialist";
    }
}
int main(){
    int T,s,t,e;
    cin >> T;
    for(int i=1;i<=T;i++){
        cin >> s >> t >> e;
        ans(s,t,e);
        cout << endl;
    }
    return 0;
}
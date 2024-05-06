#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int c=0,n;
        cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++){
        if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
            i+=2;
            c++;
        }
        else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
            i+=2;
            c++;
        }
       }
        cout<<c<<endl;
       
    }
    return 0;
}
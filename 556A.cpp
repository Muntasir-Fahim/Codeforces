#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,cz = 0, c1 = 0;
    cin>>n;
    string str;
    cin>>str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            cz++;
        }
        else   
            c1++;
        
    }
    if(cz>c1)
        cout<<(cz-c1)<<endl;
    else
        cout<<(c1-cz)<<endl;
    
}
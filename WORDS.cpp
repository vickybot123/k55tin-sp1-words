#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool letter (char c)
{
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("Words.INP","r",stdin);
    freopen("Words.OUT","w",stdout);
    string s,w;
    getline(cin,s);
    s.push_back(' ');
    for(char& x:s)
    {
        if(letter(x))
        {
            w.push_back(x);
        }
        else
        {
            if(w!="") cout<<w<<'\n';
            w="";
        }
    }
}

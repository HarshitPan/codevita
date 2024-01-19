#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<string> findSubString(string s1,string s2)
{
    vector<string> result;
    string rev="";
    for(int i=s2.length()-1;i>=0;i--)
    {
        rev+=s2[i];
    }
    //cout<<"rev"<<rev<<endl;
    if(s1.length()>s2.length())
    {
        return {"Impossible"};
    }
    int i=0;
    while(static_cast<std::string::size_type>(i)<s1.length())
    {
        auto j=static_cast<std::string::size_type>(1);
        while(s2.find(s1.substr(i,j)) != string::npos || rev.find(s1.substr(i,j)) != string::npos)
        {
            j++;
            if(j==s1.length()) break;
        }
        if(j==1)
        {
            return {"Impossible"};
        }
        //cout<<s1.substr(i,j-1)<<endl<<endl;
        result.push_back(s1.substr(i,j-1));
        i=i+j-1;
        //cout<<i<<endl;
    }
    return result;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    vector<string> result=findSubString(s1,s2);
    string res="";
    for(std::vector<std::string>::size_type i=0;i<result.size();i++)
    {
        res=res+result[i];
        if(i!=result.size()-1) res+="|";
    }
    cout<<res<<endl;
    return 0;
}
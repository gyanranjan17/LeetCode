//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a,char b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    
    bool ispar(string x)
    {
        // Your code here
        stack <char> s;
        for(auto i:x){
            if(i=='(' || i=='{' || i=='[')
            s.push(i);
            else
            {
                if(s.empty())
                return 0;
                if(matching(s.top(),i)==0)
                return 0;
                else s.pop();
            }
        }
        return (s.empty());
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
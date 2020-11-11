
class Solution {
public:
    string removeDuplicates(string s)
     {
    int i=0;
    stack<char> st;
    while(s[i]!='\0')
    {

        if(st.size()==0)
            st.push(s[i++]);
        else if(s[i]==st.top() && st.size()>0)
        {
            st.pop();
            i++;
        }
        else
        {
             st.push(s[i++]);
        }

    }
    string ans="";
    i=0;
    while (!st.empty())
    {
      ans+=st.top();
      st.pop();
    }
    reverse(ans.begin(), ans.end());
        return ans;
    }
};

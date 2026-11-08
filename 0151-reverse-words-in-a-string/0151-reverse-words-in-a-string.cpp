class Solution {
public:
    string reverseWords(string s) {
stack<char>st;
string res="";
for(int i=s.size()-1;i>=0;i--){
    if(s[i]!=' '){
        st.push(s[i]);
    }
    else{
        if(!st.empty()){
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        res+=" ";
    }
    }
}
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        if(!res.empty() && res.back()==' '){
            res.pop_back();
        }
        return res;
    }
};

//baseball_question
//based on stack data structure.
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {int prev1=st.top();
             st.pop();
             int prev2=st.top();
             st.push(prev1);
             st.push(prev1+prev2);
                ans+=prev1+prev2;
            }else if(ops[i]=="D"){
                int prev1=st.top();
                st.push(prev1*2);
                ans+=prev1*2;
        
            }else if(ops[i]=="C"){
                if(!st.empty()){
                ans-=st.top();
                st.pop();
                }
            }else{
                stringstream s(ops[i]);
                int x;
                s>>x;
                st.push(x);
                ans+=x;
            }
        }
        return ans;
    }
};

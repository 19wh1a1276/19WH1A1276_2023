vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans;
    ans.push_back(-1);
    stack<int> stk;
    stk.push(A[0]);
    for(int i=1; i<A.size(); i++)
    {
        while(!stk.empty() && stk.top() >= A[i])
        {
            stk.pop();
        }
        if(!stk.empty()){ ans.push_back(stk.top()); }
        else{ ans.push_back(-1); }
        stk.push(A[i]);
    }
    return ans;
}
void helper (string s, int i, string res, vector<string> &answer)
{
    if(i == s.size())
    {
        answer.push_back(res);
        return;
    }

    //taking the next character in the consideration
    helper(s,i+1,res+s[i],answer);

    //not taking the next character in the consideration
    helper(s,i+1,res,answer);
}


vector<string> generateSubsequences(string s)
{
    vector<string> answer;
    helper(s,0,"",answer);
    return answer;

}
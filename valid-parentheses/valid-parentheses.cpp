class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> s1;
    s1.push('I');
    for(int i = 0; i< s.length(); i++)
    {
        if( s[i] == '(' || s[i] == '{' || s[i] == '[' )
            s1.push(s[i]);

        else if
        (
            (s1.top() == '(' && s[i] == ')') ||
            (s1.top() == '{' && s[i] == '}') ||
            (s1.top() == '[' && s[i] == ']')
        )
        s1.pop();
        else 
            s1.push(s[i]);
    }
    if(s1.size() == 1)
        return true;
    return false;
   }
};
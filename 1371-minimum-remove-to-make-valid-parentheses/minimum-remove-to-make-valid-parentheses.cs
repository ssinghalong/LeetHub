public class Solution {
    public string MinRemoveToMakeValid(string s) {
        StringBuilder builder = new();
        bool[] includeChar = new bool[s.Length];
        Stack<int> stack = new();
        
        for (int i=0; i<s.Length; i++)
        {
            if (s[i] == '(')
            {
                stack.Push(i);
            }
            else if (s[i] == ')')
            {
                if (stack.Count > 0)
                {
                    includeChar[stack.Peek()] = true;
                    includeChar[i] = true;
                    stack.Pop();
                }
            }
            else
            {
                includeChar[i] = true;
            }
            
        }
        
        for (int i=0; i<s.Length; i++)
        {
            if (includeChar[i])
            {
                builder.Append(s[i]);
            }
        }
        GC.Collect();
        return builder.ToString();
    }
}
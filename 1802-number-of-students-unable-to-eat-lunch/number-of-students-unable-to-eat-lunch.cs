public
class Solution
{
public int CountStudents(int[] sandwiches, int[] students)
    {
        var st = new Stack<int>();
        var qu = new Queue<int>();
        for (int i = 0; i < students.Length; i++)
        {
            st.Push(students[students.Length-i-1]);
            qu.Enqueue(sandwiches[i]);
        }
        int t = -1;
        while (t != st.Count && t != 0)
        {
            t = st.Count;
            int m = t;
            for (int i = 0; i < m; i++)
            {
                int front = qu.Dequeue();
                if (st.Peek() == front)
                {
                    st.Pop();
                }
                else
                {
                    qu.Enqueue(front);
                }
            }
        }
        GC.Collect();
        return qu.Count;
    }
}
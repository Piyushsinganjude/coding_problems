void QueueStack :: push(int x)
{
        // Your Code
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{ 
    if(q1.size()==0) {return-1;}
    int val = q1.front();
    q1.pop();
    return val;
}
LINK = https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1?page=1&difficulty[]=0&category[]=Stack&sortBy=submissions

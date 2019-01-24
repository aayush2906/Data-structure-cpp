{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _pop(stack<int>s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _pop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/* _push function to insert elements of array to
   stack
*/
stack<int>_push(int arr[],int n)
{
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
    }
    return s;    //return a stack with all elements of arr inserted in it
}
/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int>s)
{
    stack<int>s1;
    s1=s;
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }//print top and pop for each element until it becomes empty
}

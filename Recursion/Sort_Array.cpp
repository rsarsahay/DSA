#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//Recursive Functio n to sort an array
//Algorithm
/*
  1.Recursive Function to to insert an element in a vector
  - base condition to check size of vector is equal to zero or last element is smaller than temp value
  -if true add temp to a vector
  -store last element in a vector
  -remove last element from a vector
  -recursive function to insert removed element in a vector
  -add val into a  vector

  2.Recursive Function to to sort elements in a vector
  -check if size of vector is equal to 1 then return
  -store last element of vector in a temp variable
  -remove last element
  -sort the elments
  -call insert function to add last element into a vector
*/

// Insert the given key into the sorted stack while maintaining its sorted order.
// This is similar to the recursive insertion sort routine
void sortedInsert(stack<int> &stack, int key)
{
    // base case: if the stack is empty or
    // the key is greater than all elements in the stack
    if (stack.empty() || key > stack.top())
    {
        stack.push(key);
        return;
    }

    /* We reach here when the key is smaller than the top element */

    // remove the top element
    int top = stack.top();
    stack.pop();

    // recur for the remaining elements in the stack
    sortedInsert(stack, key);

    // insert the popped element back into the stack
    stack.push(top);
}

// Recursive method to sort a stack
void sortstack(stack<int> &stack)
{
    // base case: stack is empty
    if (stack.empty()) {
        return;
    }

    // remove the top element
    int top = stack.top();
    stack.pop();

    // recur for the remaining elements in the stack
    sortstack(stack);

    // insert the popped element back into the sorted stack
    sortedInsert(stack, top);
}

void printStack(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    cout<<"Enter no. of elements=";
    cin>>n;
    vector<int> list(n);
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
    cin>>list[i];

    stack<int> stack;
    for (int i: list) {
        stack.push(i);
    }

    cout << "Stack before sorting: ";
    printStack(stack);

    sortstack(stack);

    cout << "Stack after sorting: ";
    printStack(stack);

    return 0;
}
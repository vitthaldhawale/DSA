class Solution {
public:
// class Stack {
// private:
//     int* arr;       // Pointer to the array representing the stack
//     int top;        // Index of the top element
//     int capacity;   // Maximum size of the stack

// public:
//     // Constructor to initialize stack
//     Stack(int size) {
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

//     // Destructor to free memory
//     ~Stack() {
//         delete[] arr;
//     }

//     // Push an element onto the stack
//     void push(int element) {
//         if (isFull()) {
//             cout << "Stack overflow! Cannot push " << element << endl;
//             return;
//         }
//         arr[++top] = element;
//     }

//     // Pop the top element from the stack
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack underflow! No element to pop." << endl;
//             return -1; // Returning -1 to indicate error
//         }
//         return arr[top--];
//     }

//     // Peek at the top element of the stack
//     int peek() const {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return -1; // Returning -1 to indicate error
//         }
//         return arr[top];
//     }

//     // Check if the stack is empty
//     bool isEmpty() const {
//         return top == -1;
//     }

//     // Check if the stack is full
//     bool isFull() const {
//         return top == capacity - 1;
//     }

//     // Display the elements of the stack
//     void display() const {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = 0; i <= top; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                char top=st.top();
                if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='['))
                {
                    st.pop();
                }
                else return false;
            }
        }
           return st.empty(); 
    }
};
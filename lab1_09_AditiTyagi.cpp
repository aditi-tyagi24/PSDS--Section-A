#include <iostream>
using namespace std;
int main(){
    int stack[7];
    int top =-1;
    //pushh
    stack[++top]=23;
    stack[++top]=56;
    stack[++top]=67;
    stack[++top]=54;
    cout<<"Stack after push: "<<endl;
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    //POP
    cout << "Popped: " << stack[top] << endl;
    top--;
    cout << "Popped: " << stack[top] << endl;
    top--;
    cout << "Stack after popping 2 elements: " << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
    return 0;
}
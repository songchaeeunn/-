#include<iostream>
#include<stack>
#include<string>
 
using namespace std;
 
int main(void){
    int n; //n을 선언 한다
    cin >> n; // n을 입력 받는다
    
    stack<int> st; //int 타입 stack 선언. 
    string str; //string 타입 str선언
 
    for(int i=0; i<n; i++) {
        cin >> str;
 
        if (str == "push") { //push 명령어 일때. 
 
            int num;
            cin >> num;
            st.push(num);
 
        } else if (str == "pop") {    //pop 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "-1" << endl;
            }
 
        } else if (str == "size") {        //size 명령어 일때. 
 
            cout << st.size() << endl;
 
        } else if (str == "empty") {    //empty 명령어 일때. 
 
            if (st.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
 
        } else if (str == "top") {        //top 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
 
        }
 
    }
    return 0;
}

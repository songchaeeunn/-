#include<iostream>
#include<stack>
#include<string>
 
using namespace std;
 
int main(void){
    int n; 
    cin >> n; //횟수를 입력받음
    
    stack<int> st; //int type의 stack 선언. 
    string str;
 
    for(int i=0; i<n; i++) {
        cin >> str; //문자열을 입력 받음
 
        if (str == "push") { // 문자열이 push 일때
 
            int num; 
            cin >> num; //push할 숫자를 입력 받고
            st.push(num); //num을 추가한다.
 
        } else if (str == "pop") {    //pop 명령어 일때. 
 
            if (!st.empty()) { //비어있지 않다면
                cout << st.top() << endl;  //위에 있는 것을 출력하고
                st.pop(); // 삭제
            } else { //st가 비어있다면
                cout << "-1" << endl; //-1출력
            }
 
        } else if (str == "size") {        //size 명령어 일때. 
 
            cout << st.size() << endl; //sizw 출력
 
        } else if (str == "empty") {    //empty 명령어 일때. 
 
            if (st.empty()) {
                cout << "1" << endl; //비어있으면 1출력
            } else {
                cout << "0" << endl; //비어있지 않으면 0을 출력
            }
 
        } else if (str == "top") {        //top 명령어 일때. 
 
            if (!st.empty()) { //비어있으면
                cout << st.top() << endl; //가장 위에 있는 문자열 출력
            } else { // 비어있지 않으면
                cout << "-1" << endl; //-1 출력
            }
 
        }
 
    }
    return 0;
}

//시간복잡도 : O(n)
//공간복잡도 : 모르겠음

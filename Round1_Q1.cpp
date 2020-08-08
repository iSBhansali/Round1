#include <stack>
#include <string>
#include <iostream>
using namespace std;

string isBalanced(string s) {
    stack<char> st;  
    for (auto c: s) {
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push(c);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    
    return st.empty() ? "YES" : "NO";
}

int main() {
	// #ifndef ONLINE_JUDGE
 //    freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
 //    #endif

    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        
        string s;
        cin >> s;
        string c = isBalanced(s);
        cout << c << "\n";
    }
    return 0;	
}

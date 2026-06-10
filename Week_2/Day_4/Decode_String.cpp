class Solution {
public:
    string decodeString(string s) {
        //Time: O(n+m)  Space: O(n+m)
        stack<string> st;
        string curr = "";
        int num = 0;

        for(char ch : s) {

            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if(ch == '[') {
                st.push(curr);
                st.push(to_string(num));

                curr = "";
                num = 0;
            }

            else if(ch >= 'a' && ch <= 'z') {
                curr += ch;
            }

            else if(ch == ']') {

                int k = stoi(st.top());
                st.pop();

                string prev = st.top();
                st.pop();

                string temp = "";

                while(k--) {
                    temp += curr;
                }

                curr = prev + temp;
            }
        }

        return curr;
    }
};

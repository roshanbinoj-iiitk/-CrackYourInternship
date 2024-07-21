class Solution {
public:
    string addBinary(string a, string b) {
        int as = a.size();
        int bs = b.size();
        int maxs = max(as, bs);
        int diff = abs(as - bs);
        
        if (as > bs) {
            while (diff--) {
                b = "0" + b;
            }
        } else {
            while (diff--) {
                a = "0" + a;
            }
        }
        
        string ans = "";
        int carry = 0;
        
        for (int i = maxs - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            if (sum == 0) {
                ans = "0" + ans;
                carry = 0;
            } else if (sum == 1) {
                ans = "1" + ans;
                carry = 0;
            } else if (sum == 2) {
                ans = "0" + ans;
                carry = 1;
            } else if (sum == 3) {
                ans = "1" + ans;
                carry = 1;
            }
        }
        
        if (carry) {
            ans = "1" + ans;
        }
        
        return ans;
    }
};

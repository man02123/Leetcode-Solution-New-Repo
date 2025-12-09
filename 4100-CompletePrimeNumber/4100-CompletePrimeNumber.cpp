// Last updated: 09/12/2025, 23:21:00
class Solution {
public:
    bool isprime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();

        for (int i = 1; i <= n; i++) {
            int prefix = stoi(s.substr(0, i));
            if (!isprime(prefix)) return false;
        }

        for (int i = 0; i < n; i++) {
            int suffix = stoi(s.substr(i));
            if (!isprime(suffix)) return false;
        }
        ///aaaa
        return true;
    }
};
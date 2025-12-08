// Last updated: 08/12/2025, 17:37:02
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        int k=1;
        while(k<=n)
        {
            if(k%3==0 && k%5==0)
                res.push_back("FizzBuzz");
            else if(k%3==0 )
                res.push_back("Fizz");
            else if(k%5==0)
                res.push_back("Buzz");
            else 
                res.push_back(to_string(k));
            k++;
        }
      return res;  
    }
};
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0)
        {
            return "";
        }
         int en = min(strs[0].size(), strs[strs.size() - 1].size());

         auto first = strs[0], last = strs[strs.size() - 1];
         int i = 0;
         while (i < en && first[i] == last[i])
         {
             ++i;
         }

            string pre = first.substr(0, i);
            return pre;
    }
};

int main()
{
  Solution sol;
  vector<string> str = {"dog", "dogger", "dogfix"};
  cout << sol.longestCommonPrefix(str);
  return 0;
}

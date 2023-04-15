#include <iostream>
#include <vector>

#include <unordered_set>
using namespace std;


void removeDuplicates(vector<int>& vec) {
    vector<int> uniqueVec;
    for (auto elem : vec) {
        bool isUnique = true;
        for (auto uniqueElem : uniqueVec) {
            if (elem == uniqueElem) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueVec.push_back(elem);
        }
    }
    vec.clear();
    vec = uniqueVec;
}


void removeDuplicates2(std::vector<int>& vec)
{
    unordered_set<int> seen;
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&](int x) {
        return !seen.insert(x).second;
        }), vec.end());
}
int main() {
    vector<int> vec = { 9,9,9,9, 5,5,5,4,4,4,3,3,3,2,2,2,1,1,1 };
    
    //removeDuplicates(vec);
    removeDuplicates2(vec);
    for (auto elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}

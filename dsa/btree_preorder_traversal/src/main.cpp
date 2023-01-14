#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution *s = new Solution();

    TreeNode *tree = new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr));
    TreeNode *tree1 = new TreeNode();

    vector<int> result = s->preorderTraversal(tree);
    vector<int> result1 = s->preorderTraversal(tree1);

    for (int i : result) {
        cout << i << ", ";
    }
    cout << endl;
    
    delete s;

    return 0;
}

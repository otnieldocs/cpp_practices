#ifndef SOLUTION_H
#define SOLUTION_H

#include<vector>
#include "../shared/TreeNode.h"
using namespace std;

class Solution
{
private:
    vector<int> result;
    void traverse(TreeNode* node) {
        if (node != nullptr)
        {
            result.push_back(node->val);

            traverse(node->left);
            traverse(node->right);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        traverse(root);
        return result;
    }
};

#endif
#include <bits/stdc++.h>

using namespace std;
void testBoolean(bool answer, bool expected, int testNumber);
struct TreeNode {
      int val;
      TreeNode *left;
    TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        stack<pair<TreeNode*, int>> graph;
        graph.push({root, 0});
        while (!graph.empty())
        {
            auto [node, currentSum] = graph.top();
            graph.pop();
            currentSum+=node->val;

            
            if(node->left == nullptr && node->right ==  nullptr){
                if(currentSum == targetSum ) return true;
            }   

         if (node->right != nullptr) {
                graph.push({node->right, currentSum});
            }

            if (node->left != nullptr) {
                graph.push({node->left, currentSum});
            }
        }

        return false;
        
    }
    void dfs(int x) {

    }

     TreeNode* createTree(const std::vector<int>& values) {
        if (values.empty()) return nullptr;

        TreeNode* root = new TreeNode(values[0]);
        std::queue<TreeNode*> q;
        q.push(root);

        for (int i = 1; i < values.size(); i += 2) {
            TreeNode* current = q.front();
            q.pop();

            if (values[i] != NULL) {
                current->left = new TreeNode(values[i]);
                q.push(current->left);
            }

            if (i + 1 < values.size() && values[i + 1] != NULL) {
                current->right = new TreeNode(values[i + 1]);
                q.push(current->right);
            }
        }

        return root;
    }
};

int main(){
	Solution s;
    //Test 1
   std::vector<int> values = {5, 4, 8, 11, NULL, 13, 4, 7, 2, NULL, NULL, NULL, 1};
    TreeNode* test1 = s.createTree(values);

    //end of test 1
    //Test 2
    TreeNode* test2 = new TreeNode(1);
    test2->left = new TreeNode(2);
    test2->right = new TreeNode(3);
    //End of test 2

    //Test 3
    TreeNode* test3 = nullptr;
    //end of test 3
	testBoolean(s.hasPathSum(test1, 22), true, 1);
	testBoolean(s.hasPathSum(test2, 5), false, 2);
	testBoolean(s.hasPathSum(test3, 0), false, 3);
}

void testBoolean(bool answer, bool expected, int testNumber){
	 if (answer == expected) {
        std::cout << "\n[ \033[32m" << testNumber << " \033[0m]: ";
        std::cout << "\033[32mPassed!\033[0m" << std::endl;
        return;
    }

    std::cout << "\n[ \033[31m" << testNumber << " \033[0m]: ";
    std::cout << "\033[31mFailed! \033[0m";
	cout << "Your output was " << answer << " , but this should be " << expected;
}

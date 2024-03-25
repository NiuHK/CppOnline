#include <iostream>
#include <queue>
#include <stack>
using namespace std;



class Point

{

public:

    void setPoint(int x, int y) //实现setPoint函数

    {

        xPos = x;

        yPos = y;

    }


    void printPoint() //实现printPoint函数

    {

        cout << "x = " << xPos << endl;

        cout << "y = " << yPos << endl;

    }


private:

    int xPos;

    int yPos;

};

class Master
{
public:
    Master();     //构造函数
    ~Master();    //析构函数

    //成员函数
public:
    void addBloodVolume();
    void reduceBloodVolume();
    void showBloodVolume();

    //在类的内部实现，默认是inline
    void setBloodVolume(int32_t bloodVolume)
    {
        m_blood_volume = bloodVolume;
    }

    void addManaVolume();
    void reduceManaVolume();
    void showManaVolume();

    //在类的内部实现，默认是inline
    void setManaVolume(int32_t manaVolume)
    {
        m_mana_volume = manaVolume;
    }

    //成员变量
private:
    int32_t m_blood_volume;
    int32_t m_mana_volume;
};

struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* buildBinaryTree(string preorder, int& index) {
    if (index >= preorder.size() || preorder[index] == '#') {
        index++;
        return nullptr;
    }

    TreeNode* root = new TreeNode(preorder[index]);
    index++;
    root->left = buildBinaryTree(preorder, index);
    root->right = buildBinaryTree(preorder, index);
    return root;
}

void preorderRecursive(TreeNode* root) {
    if (root) {
        cout << root->data;
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
}

void inorderRecursive(TreeNode* root) {
    if (root) {
        inorderRecursive(root->left);
        cout << root->data;
        inorderRecursive(root->right);
    }
}

void postorderRecursive(TreeNode* root) {
    if (root) {
        postorderRecursive(root->left);
        postorderRecursive(root->right);
        cout << root->data;
    }
}

void levelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        cout << current->data;

        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }
}

class UselessClass1 {
private:
  int* data;

public:
  UselessClass1() {
    data = new int[10];
    std::cout << "无用的类被创建了！" << std::endl;
  }

  void initializeData() {
    for (int i = 0; i < 10; ++i) {
      data[i] = i;
    }
    std::cout << "数据被初始化了！" << std::endl;
  }

  void processData() {
    // 这里可以添加一些毫无实际用途的数据处理逻辑
    std::cout << "数据被处理了！" << std::endl;
  }

  ~UselessClass1() {
    delete[] data;
    std::cout << "无用的类被销毁了！" << std::endl;
  }
};


class UselessClass {
private:
  int* data;

public:
  UselessClass() {
    data = new int[10];
    std::cout << "无用的类被创建了！" << std::endl;
  }

  void initializeData() {
    for (int i = 0; i < 10; ++i) {
      data[i] = i;
    }
    std::cout << "数据被初始化了！" << std::endl;
  }

  void processData() {
    // 这里可以添加一些毫无实际用途的数据处理逻辑
    std::cout << "数据被处理了！" << std::endl;
  }

  ~UselessClass() {
    delete[] data;
    std::cout << "无用的类被销毁了！" << std::endl;
  }
};
int main() {

    string preorder;
    cin >> preorder;
    int index = 0;

    TreeNode* root = buildBinaryTree(preorder, index);

    preorderRecursive(root);
    cout << endl;

    inorderRecursive(root);
    cout << endl;

    postorderRecursive(root);
    cout << endl;

    levelOrder(root);
    cout << endl;

    return 0;
}

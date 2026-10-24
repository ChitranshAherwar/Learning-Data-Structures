#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value)
{
    if(root == nullptr)
        return new Node{value, nullptr, nullptr};

    if(value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

bool search(Node* root, int value)
{
    if(root == nullptr)
        return false;

        if(root->data == value)
            return true;

        if(value < root->data)
        return  search(root->left, value);
    else
        return search(root->right, value);

}

Node* deleteNode(Node* root, int value)
{
    if (root == nullptr)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);

    else if (value > root->data)
        root->right = deleteNode(root->right, value);

    else
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }

        if (root->left == nullptr)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == nullptr)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = root->right;

        while (temp->left != nullptr)
            temp = temp->left;

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void preorder(Node* root)
{
    if(root == nullptr)
    return;


    std::cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);


}

void inorder(Node* root)
{
    if(root == nullptr)
    return;

    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);

}

void postorder(Node* root)
{
    if(root == nullptr)
    return;

    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << " ";

}

int main()
{
    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 15);

    if(search(root, 3))
    {
        std::cout << "Value found.\n";
    }
    else
    {
        std::cout << "Value not found.\n";
    }

    std::cout << "Preorder: ";
    preorder(root);
    std::cout << '\n';
    std::cout << "Inorder: ";
    inorder(root);
    std::cout << '\n';
    std::cout << "Postorder: ";
    postorder(root);

    deleteNode(root, 3);
    std::cout << "\nAfter deletion.\n";

    std::cout << "Preorder: ";
    preorder(root);
    std::cout << '\n';
    std::cout << "Inorder: ";
    inorder(root);
    std::cout << '\n';
    std::cout << "Postorder: ";
    postorder(root);
}
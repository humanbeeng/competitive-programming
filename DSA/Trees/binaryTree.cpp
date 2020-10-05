#include <iostream>
#include<vector>
using namespace std;

struct node *root = NULL;


struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int new_data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct node *root){
    if (root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void insertKey(node *&root, int new_data){
    if (root == NULL){
        root = createNode(new_data);
        // cout << new_data << " is inserted\n";
        return;
    }
    if (new_data <= root->data){
        insertKey(root->left, new_data);
    }
    else if (new_data > root->data){
        insertKey(root->right, new_data);
    }
}

void preorder(struct node* root){
    if(root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void displayRoot(struct node *&root){
    cout << "\nThe root element is "<<root->data << endl;   
}

bool lookupIterative(struct node *root, int key,int level){ 
    while(root!= NULL){
        ++level;
        if(root-> data == key){
            cout << "Level : " << level << endl;
            return true;    
        }
        else if(key < root->data){
            root = root->left;
        }
        else if(key > root->data){
            root = root->right;
        }
    }
    
    return false;
}

struct node* lookupRecursive(struct node* root, int key){
    if(root == NULL){
        cout << "Key not found" << endl;
        return nullptr;
    }

    if(key == root->data){
        cout << "Key found" << endl;
        return nullptr;  
    }
    if(key < root->data){
        return lookupRecursive(root->left, key);
    }
    return lookupRecursive(root->right, key);
    
    
}

void deleteKey(struct node *root, int key){
    int minSucc;
    if(root == NULL){
        cout << "No elements found in the BST\n";
        return;
    }
    
}


int main(){
    struct node *root = nullptr;
    int keys[] = {15, 10, 20, 8, 12, 16, 12, 25};
    for (int key : keys){
        insertKey(root, key);
    }
    // inorder(root);

    // preorder(root);

    // displayRoot(root);

    // bool res = lookupIterative(root,12,0);
    // lookupRecursive(root,10);
    // cout << res << endl;

    return 0;
}
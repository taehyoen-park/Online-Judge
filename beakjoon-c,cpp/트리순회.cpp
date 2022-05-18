#include<iostream>
#include<memory>
#include<cstddef>

using namespace std;

class node{
public:
	char data;
    node *lc,*rc;
    node();

    void preorder(const node *ptr);
    void inorder(const node *ptr);
	void postorder(const node *ptr);
};


node::node()
{
    data = 'a';
    lc = nullptr;
    rc = nullptr;
}

void node::preorder(const node *ptr)
{
    if(ptr)
    {
        printf("%c",ptr->data);
        preorder(ptr->lc);
        preorder(ptr->rc);
    }
}

void node::inorder(const node *ptr)
{
   if(ptr)
    {
        inorder(ptr->lc);
        printf("%c",ptr->data);
        inorder(ptr->rc);
    }
	return;
}

void node::postorder(const node *ptr)
{
    if(ptr)
    { 
        postorder(ptr->lc);
        postorder(ptr->rc);
        printf("%c",ptr->data);
    }
}

int main()
{
    node Node[28];
    
    int n;
	cin >> n;
    for(int i = 0; i < n; i++)
    {
        char data,lc,rc;
        cin >> data >> lc >> rc;
        int index = data-65;
        Node[index].data = data;
        if(lc == '.')
            Node[index].lc = nullptr;
        else{
        	int a = lc-65;
            Node[index].lc = &Node[a];
            Node[a].data = lc;
        }

        if(rc == '.')
            Node[data-65].rc = nullptr;
        else{
        	int a = rc - 65;
            Node[index].rc = &Node[a];
            Node[a].data = rc;
        }   
    }

	Node[0].preorder(Node);
	printf("\n");
	Node[0].inorder(Node);
	printf("\n"); 
	Node[0].postorder(Node); 
	
    return 0;
}   
    

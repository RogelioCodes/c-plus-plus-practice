#include <iostream>
using namespace std;
class IntBinaryTree
{
private:
 struct TreeNode
 {
   int value; // The value in the node
   TreeNode *left; // Pointer to left child node
   TreeNode *right; // Pointer to right child node
 };
  TreeNode *root; // Pointer to the root node

  // Private member functions
  void insert(TreeNode *&, TreeNode *&);
  void destroySubTree(TreeNode *);
  void deleteNode(int, TreeNode *&);
  void makeDeletion(TreeNode *&);
  void displayInOrder(TreeNode *) const;
  TreeNode *copyTree(TreeNode*);
  int countNodes(TreeNode *&);
  int getTreeHeight(TreeNode *);
public:
  // Constructor
  IntBinaryTree() { root = nullptr; }

  // Copy constructor
  IntBinaryTree(const IntBinaryTree &);
  // Destructor
  ~IntBinaryTree() { destroySubTree(root); }

  // Binary tree operations
  void insertNode(int);
  bool searchNode(int);
  void remove(int);

  void displayInOrder() const { displayInOrder(root); }

  int numNodes();
  int treeHeight();


  // Overloaded Assignment Operator
  void operator= (const IntBinaryTree & );
};
//***********************************************************
// insert accepts a TreeNode pointer and a pointer to a node.
// The function inserts the node into the tree pointed to by
// the TreeNode pointer. This function is called recursively.
void IntBinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
  if (nodePtr == nullptr)
    {
      nodePtr = newNode; // Insert the node.
    }
  else if (newNode->value < nodePtr->value)
    {
      insert(nodePtr->left, newNode); // Search the left branch
    }
  else
    {
      insert(nodePtr->right, newNode);// Search the right branch
    }
}
//**********************************************************
// insertNode creates a new node to hold num as its value,
// and passes it to the insert function.
void IntBinaryTree::insertNode(int num)
{
  TreeNode *newNode = nullptr; // Pointer to a new node.
  // Create a new node and store num in it.
  newNode = new TreeNode;
  newNode->value = num;
  newNode->left = newNode->right = nullptr;

  // Insert the node.
  insert(root, newNode);
}
//***************************************************
// destroySubTree is called by the destructor. It
// deletes all nodes in the tree.
void IntBinaryTree::destroySubTree(TreeNode *nodePtr)
{
  if (nodePtr)
    {
      if (nodePtr->left)
	{
	  destroySubTree(nodePtr->left);
	}

      if (nodePtr->right)
	{
	  destroySubTree(nodePtr->right);
	}

      delete nodePtr;
    }
}

//***************************************************
// searchNode determines if a value is present in
// the tree. If so, the function returns true.
// Otherwise, it returns false.
bool IntBinaryTree::searchNode(int num)

{

  bool status = false;

  TreeNode *nodePtr = root;

  while (nodePtr)

    {

      if (nodePtr->value == num)

	{

	  status = true;

	}

      else if (num < nodePtr->value)

	{

	  nodePtr = nodePtr->left;

	}

      else

	{

	  nodePtr = nodePtr->right;

	}

    }

  return status;

}

//**********************************************

// remove calls deleteNode to delete the

// node whose value member is the same as num.

void IntBinaryTree::remove(int num)

{

  deleteNode(num, root);

}

//********************************************

// deleteNode deletes the node whose value

// member is the same as num.

void IntBinaryTree::deleteNode(int num, TreeNode *&nodePtr)

{

  if (num < nodePtr->value)

    {

      deleteNode(num, nodePtr->left);

    }

  else if (num > nodePtr->value)

    {

      deleteNode(num, nodePtr->right);

    }

  else

    {

      makeDeletion(nodePtr);

    }

}

//***********************************************************

// makeDeletion takes a reference to a pointer to the node

// that is to be deleted. The node is removed and the

// branches of the tree below the node are reattached.

void IntBinaryTree::makeDeletion(TreeNode *&nodePtr)

{

  // Define a temporary pointer to use in reattaching

  // the left subtree.

  TreeNode *tempNodePtr = nullptr;

  if (nodePtr == nullptr)

    {

      cout << "Cannot delete empty node.\n";

    }

  else if (nodePtr->right == nullptr)

    {

      tempNodePtr = nodePtr;

      nodePtr = nodePtr->left; // Reattach the left child

      delete tempNodePtr;

    }

  else if (nodePtr->left == nullptr)

    {

      tempNodePtr = nodePtr;

      nodePtr = nodePtr->right; // Reattach the right child

      delete tempNodePtr;

    }

  // If the node has two children.

  else

    {

      // Move one node the right.

      tempNodePtr = nodePtr->right;

      // Go to the end left node.

      while (tempNodePtr->left)

	{

	  tempNodePtr = tempNodePtr->left;

	}

      // Reattach the left subtree.

      tempNodePtr->left = nodePtr->left;

      tempNodePtr = nodePtr;

      // Reattach the right subtree.

      nodePtr = nodePtr->right;

      delete tempNodePtr;

    }

}

//****************************************************************

// The displayInOrder member function displays the values

// in the subtree pointed to by nodePtr, via inorder traversal.

void IntBinaryTree::displayInOrder(TreeNode *nodePtr) const

{

  if(nodePtr==NULL)

    {
      //      cout << "Empty list." << endl ; 
      return;

    }

  displayInOrder(nodePtr->left);

  cout<<nodePtr->value<<" ";

  displayInOrder(nodePtr->right);

}

//*********************************************************

// Copy Constructor

// calls the copyTree function

IntBinaryTree::IntBinaryTree (const IntBinaryTree &tree )

{

  root=NULL;

  copyTree(tree.root);

}

//***********************************************

// Assignment Operator

// Hint: destroy all nodes in the old tree then use the

// copyTree function

void IntBinaryTree::operator= ( const IntBinaryTree &tree )

{

  root=NULL;

  copyTree(tree.root);
  //  destroySubTree(tree.root);
}

//********************************************************

// copyTree Function: called by copy constructor and

// Assignment operator function. This function copies all tree nodes // by visits the root nodes first (pre-order traversal)

IntBinaryTree::TreeNode *IntBinaryTree::copyTree(TreeNode *nPtr)

{

  if(nPtr)

    {

      insertNode(nPtr->value);

      copyTree(nPtr->left);

      copyTree(nPtr->right);

    }

}

//********************************************************

// numNodes Function: calls countNodes and returns the number

// of nodes in the tree

int IntBinaryTree::numNodes()

{

  int node_count=countNodes(root);

  return node_count;

}

//****************************************************************

// The countNodes function uses recursion to count the number

// of nodes in the tree. This function is called by the public

// member function numNodes. It visits all the root nodes first

// (pre-order traversal)

int IntBinaryTree::countNodes(TreeNode *&nodePtr)

{

  
    // Count the nodes in the binary tree to which
    // root points, and return the answer.
    if ( nodePtr == NULL )
      return 0;  // The tree is empty.  It contains no nodes.
    else {
      int count = 1;   // Start by counting the root.
      count += countNodes(nodePtr->left);  // Add the number of nodes
      //     in the left subtree.
      count += countNodes(nodePtr->right); // Add the number of nodes
      //    in the right subtree.
      return count;  // Return the total.
    }

}

//*************************************************************

// Function TreeHeight

// Calls getTreeHeight and displays the height or depth of tree.

int IntBinaryTree::treeHeight()

{

  int tree_height=getTreeHeight(root);

  return tree_height;

}

//*************************************************************

// Function getTreeHeight

// This function uses recursion to count the height of

// the tree.

int IntBinaryTree::getTreeHeight(TreeNode* nodePtr)

{

  if (nodePtr==NULL)

    return 0;

  else

    {

      /* compute the depth of each subtree */

      int lDepth = getTreeHeight(nodePtr->left);

      int rDepth = getTreeHeight(nodePtr->right);

      /* use the larger one */

      if (lDepth > rDepth)

	return(lDepth+1);

      else return(rDepth+1);

    }

}

//********************************************************

int main()

{

  // Create a binary tree to hold integers.

  IntBinaryTree tree;

  // Show the initial height, with no nodes.

  cout << "Height: " << tree.treeHeight() << endl;

  cout << endl;

  // Insert some nodes into the tree.

  cout << "Inserting nodes.\n";

  tree.insertNode(5);

  tree.insertNode(8);

  tree.insertNode(3);

  tree.insertNode(12);

  tree.insertNode(9);

  cout << endl;

  // Display the nodes.

  cout << "Here are the values in the tree:\n";

  tree.displayInOrder();

  cout << endl;

  // Display the tree height.

  cout << "Height: " << tree.treeHeight() << endl;

  cout << endl;

  // Delete some nodes.

  cout << "Deleting 8...\n";

  tree.remove(8);

  cout << "Deleting 12...\n";

  tree.remove(12);

  cout << endl;

  // Display the nodes that are left.

  cout << "Now, here are the nodes:\n";

  tree.displayInOrder();

  cout << endl;

  // Display the tree height.

  cout << "Height: " << tree.treeHeight() << endl;

  cout << endl;

  // Create two binary trees for holding integers.

  IntBinaryTree tree1, tree2;

  // Insert some nodes into tree1.

  tree1.insertNode(55);

  tree1.insertNode(5);

  tree1.insertNode(8);

  // Assign tree1 to tree2.

  tree2 = tree1;

  // Display the nodes in tree1.

  cout << "\nHere are the nodes of tree1:\n";

  tree1.displayInOrder();

  cout << endl;

  // Display the nodes in tree2.

  cout << "Now, here are the nodes of tree2:\n";

  tree2.displayInOrder();

  cout << endl;

  // Define another IntBinaryTree object and initialize it

  // with tree1. This will invoke the copy constructor.

  IntBinaryTree tree3 = tree1;

  // Display the nodes in tree3.

  cout << "Now, here are the nodes of tree3:\n";

  tree3.displayInOrder();

  cout << endl;
  //  int num = numNodes() ; 
  // tree.countNodes();
 cout << "Num of nodes: " << tree2.numNodes() ;
  return 0;

}

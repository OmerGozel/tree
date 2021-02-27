#include "tree.h"


int main()
{
	Tree myTree;
        myTree.InsertNode("root", "Make Money Fast!");
        myTree.InsertNode("Make Money Fast!", "Motivations");
        myTree.InsertNode("Make Money Fast!", "Methods");
        myTree.InsertNode("Make Money Fast!", "References");
	myTree.InsertNode("Motivations", "Greed");
        myTree.InsertNode("Methods", "Stock Freud");

        myTree.InsertNode("Methods", "Bank Robbery");

	myTree.InsertNode("Motivations", "Avidity!");
        
        myTree.DisplayTree();	
        

       return 0;
}

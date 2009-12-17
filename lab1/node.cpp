//
//#include "graph.h"
//#include "node.h"
//
//int Node::count = 0; // Count of Nodes
//
//
//
//int Node::getWeight() const { return Weight; }
//
//// Construcor
//Node::Node() 
//{
//	++count;
//	pParents = 0;
//	Number = count;
//	Weight = 0;
//	isReady = false;
//	pChilds = 0;
//	//this->AddToHash();
//	////////////////
//	
//}
//
//
//Node::Node(int iWeight)
//{
//	Node();
//	Weight = iWeight;
//}
//
//// Destructor
//Node::~Node()
//{
//	--count;
//}
//
//void Node::AddNode( int iWeight )
//{
//	// Catch index node
//	if ( !count )
//	{		
//		this->Weight = iWeight;
//	}
//	else 
//	{
//		Node * pNewNode = new Node;
//		AddLink ( this, pNewNode );
//		pNewNode->Weight = iWeight;
//	}
//
////	return pNewNode;
//}
//
//void Node::SetWeight (int iWeight)
//{
//	this->Weight = iWeight;
//}
//
//void Node::AddLink(Node * nParent, Node * nChild)
//{
//	int szChild = sizeof(nParent->pChilds)/sizeof(int),
//		szParent = sizeof(nChild->pParents)/sizeof(int);
//
//	int * childTemp = new int [ szChild ];
//	int * parentTemp = new int[ szParent ];
//
//	for (int i = 0; i < szChild; ++i)
//	{
//		childTemp[i] = nParent->pChilds[i];
//	}
//
//	for (int i = 0; i < szParent; ++i)
//	{
//		parentTemp[i] = nChild->pParents[i];
//	}
//
//	nParent->pChilds = new int [ szChild ];
//	nChild->pParents = new int [ szParent ];
//
//	for (int i = 0; i < szChild; ++i)
//	{
//		nParent->pChilds[i] = childTemp[i];
//	}
//
//	for (int i = 0; i < szParent; ++i)
//	{
//		nChild->pParents[i] = parentTemp[i] ;
//	}
//	
//	nParent->pChilds[ szChild ] = nChild->Number;
//	nChild->pParents[ szParent ] = nParent->Number;
//
////	nParent->pChilds[ szChild ] = nChild;
////	nChild->pParents[ szParent ] = nParent;
//
//	/*for ( int i = 0; i < szChild; ++i )
//	{
//		childTemp[i] = nParent->pChilds[i];
//	}
//	
//	childTemp[ szChild + 1 ] = nChild;
//	
//
//	for ( int i = 0; i < szChild + 1; ++i )
//	{
//		nParent->pChilds = 
//	}*/
//}
//
//void Node::AddToHash ()
//{
//	int szItems = sizeof(hash) / sizeof(int);
//	int * temp = new int[ szItems ];
//	
//	for (int i = 0; i < szItems - 1; ++i)
//	{
//		temp[i] = hash[ i ];
//	}
//
//	hash = new int[ szItems + 1 ];
//	for (int i = 0; i < szItems; ++i)
//	{
//		hash[i] = temp[i];
//	}
//
//	hash[szItems] = this->Number;
//}
;
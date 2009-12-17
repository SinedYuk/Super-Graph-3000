/*
=========================================
	Graph Class Declaration
=========================================
*/

#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
public:
	Graph(int Weight);
	~Graph();
	void AddItem(int Weight);
	void SetItem(int Number, int Weight);
	void AddParents(int Number, int *ParentsNumber);
	void AddParent(int ChildNumber, int ParentNumber);
	void AddChild(int ParentNumber, int ChildNumber);
	void AddChildrens(int Number, int ChildrenNumber);
	int GetWeight(int Number);
	int * GetParents(int Number) const;
	int * GetChilds(int Number) const;
	int GetParentsCount( int Number );
	int GetChildsCount( int Number );
	int GetCount();
	int GetX(int Number);
	int GetY(int Number);
	int GetCpu(int Number);
	int GetStep(int Number);
	void DeleteItem(int Number);
	void DeleteFromParent(int Number, int ParentNumber);
	void DeleteFromChilds(int Number, int ChildNumber);
	bool isChildExist(int ParentNumber, int ChildNumber);
	bool isParentExist(int ChildNumber, int ParentNumber);
	int PrepareToDrawGraph(int Number, int Left, int Y, int Width);
	void PrepareToDrawChart(int Number, int ParentCpu, int Step);
	void ClearXY();
	void DoUnready();
	void Complete(int Number);


private:
	int Count;

	struct Node
		{	
		public:
			int Weight;
			bool isReady;
			int x;  // Node drawing coordinates
			int y;
			int UsableCPU; // Information for drawing chart
			int Step;
	 
			int * Parents;  // { count, parents list... }
			int * Childs;	// { count, childs list... }
		};
		Node ** graph;
	
};


#endif
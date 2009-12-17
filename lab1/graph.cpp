/*
=========================================
	Graph Class Definition
=========================================
*/

#include "graph.h"

Graph::Graph(int Weight)
{
	this->Count = 0;
	this->graph = new Node *;
	this->AddItem( Weight );
}

void Graph::AddItem(int Weight)
{
	if ( Count == 0 )
	{
		*this->graph = new Node;
		this->graph[0]->Parents = new int;
		this->graph[0]->Childs = new int;
		this->graph[0]->Parents[0] = 0;
		this->graph[0]->Childs[0] = 0;
		this->graph[0]->isReady = false;
		++Count;
	}
	else if ( Count == 1 )
	{
		Node * Temp = new Node;
		Temp = *this->graph ;
		delete this->graph;
		this->graph = new Node*[2];

		this->graph[0]  = new Node ( *Temp );
		this->graph[1]  = new Node ;
		this->graph[1] ->Weight = Weight;

		// Linking with Index Node
		this->graph[0]->Childs = new int[2];
		this->graph[0]->Childs[0] = 1;
		this->graph[0]->Childs[1] = 1;

		this->graph[1]->Parents = new int[2];
		this->graph[1]->Parents[0] = 1;
		this->graph[1]->Parents[1] = 0;
		this->graph[1]->Childs = new int;
		this->graph[1]->Childs[0] = 0;
		this->graph[1]->isReady = false;
		++Count;
	}
	else if ( Count > 1 )
	{
		Node ** Temp = new Node* [ Count ];
		for (int i = 0; i < Count; ++i)
		{
			Temp[i] = this->graph[i] ;
		}
		
		delete this->graph;
		this->graph = new Node*[  Count + 1 ];
		
		for (int i = 0; i < Count; ++i)
		{
			this->graph[i] = Temp[i];
		}
		this->graph[ Count ]  = new Node ;
		this->graph[ Count ] -> Weight = Weight;
		this->graph[ Count ] -> Parents = new int;
		this->graph[ Count ] -> Parents[0] = 0;
		this->graph[ Count ] -> Childs = new int;
		this->graph[ Count ] -> Childs[0] = 0;
		this->graph[ Count ] -> isReady = false;
		++Count;
	}
}

int Graph::GetWeight(int Number)
{
	/*if ( Count == 1 )
	{
		return (*Graph::graph)->Weight;
	}
	else if ( Count > 1 )
	{*/
	if ( Number >= 0 && Number < Count )
	{
	return this->graph[ Number ] -> Weight ;
	}
	/*}*/
}

void Graph::SetItem(int Number, int Weight)
{
	if ( Number >= 0 && Number < Count )
	{
		this->graph[ Number ]->Weight = Weight;
	}

}

Graph::~Graph()
{
	--Count;
}

int Graph::GetCount() 
{
	return Count;
}

void Graph::AddParents( int Number, int *ParentsNumber)
{
	if ( Number >=1 && Number < Count )
	{
		int Size = ParentsNumber[0];
		if ( Size )
		{
			this->graph[ Number ]->Parents = new int[ Size + 1];
			for (int i = 0; i <= Size; ++i)
			{
				this->graph[ Number ]->Parents[i] = ParentsNumber[i];
			}
		}
		else
		{
			this->graph[ Number ]->Parents = new int;
			this->graph[ Number ]->Parents[0] = 0;
		}
	}
}

int * Graph::GetParents( int Number ) const
{
	return this->graph[ Number ]->Parents;
}

int * Graph::GetChilds( int Number ) const
{
	return this->graph[ Number ]->Childs;
}

int Graph::GetParentsCount ( int Number )
{
	return this->graph[ Number ]->Parents[0];

}

int Graph::GetChildsCount ( int Number )
{
	return this->graph[ Number ]->Childs[0];
}

void Graph::AddChild(int ParentNumber, int ChildNumber) 
{
	if ( ChildNumber >=1 && ChildNumber < Count && ParentNumber >= 0 && ParentNumber < Count  )
	{
		int Size = this->graph[ ParentNumber ]->Childs[0];
		int * Temp = new int[ Size + 1 ];

		for ( int i = 1; i <= Size; ++i )
		{
			Temp[i] = this->graph[ ParentNumber ]->Childs[i];
		}

		this->graph[ ParentNumber ]->Childs = new int[Size + 2];
		this->graph[ ParentNumber ]->Childs[0] = Size + 1;
		
		for ( int i = 1; i <= Size ; ++i )
		{
			this->graph[ ParentNumber ]->Childs[i] = Temp[i];
		}

		this->graph[ ParentNumber ]->Childs[ Size + 1 ] = ChildNumber;
	}
}

void Graph::AddParent(int ChildNumber, int ParentNumber)
{	
	bool Exist = false;
	if ( ChildNumber >=1 && ChildNumber < Count && ParentNumber >=0 && ParentNumber < Count  )
	{
		int Size = this->graph[ ParentNumber ]->Parents[0];
		
		for ( int i = 1; i <= Size; ++i )
		{
			if ( this->graph[ ParentNumber ]->Parents[i] == ParentNumber )
			{
				Exist = true;
			}
		}

		if ( Exist )
		{
				
			int * Temp = new int[ Size + 1 ];

			for ( int i = 1; i <= Size; ++i )
			{
				Temp[i] = this->graph[ ParentNumber ]->Parents[i];
			}

			this->graph[ ChildNumber ]->Parents = new int[Size + 2];
			this->graph[ ChildNumber ]->Parents[0] = Size + 1;
			
			for ( int i = 1; i <= Size ; ++i )
			{
				this->graph[ ChildNumber ]->Parents[i] = Temp[i];
			}

			this->graph[ ChildNumber ]->Parents[ Size + 1 ] = ParentNumber;
		}
	}
}

void Graph::ClearXY ()
{
	for( int i = 1; i < Count; ++i)
	{
		this->graph[i]->x = 0;
		this->graph[i]->y = 0;
	}
}

int Graph::PrepareToDrawGraph(int Number, int Left, int Y, int Width) 
{
	if ( this->graph[Number]->isReady == true )
	{
		return 0;
	}
	else
	{
		if ( Number == 0 )
		{
			this->graph[0]->x = Width / 2;
			this->graph[0]->y = 20;
		}
		else
		{		
			this->graph[Number]->x = Left + Width / 2;
			this->graph[Number]->y = Y;
		}
		int Size = this->graph[Number]->Childs[0];
		this->graph[Number]->isReady = true;

		int Result = 1;
		if ( Size )
		{
			for ( int i = 1; i <= Size; ++i )
			{
				Result += PrepareToDrawGraph( this->graph[Number]->Childs[i], Left + (Width / Size)*(i-1), Y + 30, Width / Size );
			}	
		}
		
		return Result;
	}
}

void Graph::DoUnready ()
{
	for ( int i = 0; i < Count; ++i)
	this->graph[i]->isReady = false;
}

int Graph::GetX (int Number)
{
	if ( Number >= 0 && Number < Count )
	{
		return this->graph[Number]->x; 
	}
}

int Graph::GetY (int Number)
{
	if ( Number >= 0 && Number < Count )
	{
		return this->graph[Number]->y; 
	}
}

void Graph::DeleteFromParent(int Number, int ParentNumber)
{
	if( Number > 0 && Number < Count && ParentNumber >= 0 && ParentNumber < Count )
	{
		int Size = this->graph[ParentNumber]->Childs[0];
		int FoundIndex;
		bool Found = false;
		for( int i = 1; i <= Size; ++i)
		{
			if ( this->graph[ParentNumber]->Childs[i] == Number )
			{
				Found = true;
				FoundIndex = i;
				break;
			}
		}

		if (Found)
		{
			int * Temp = new int [Size];
			Temp[0] = Size - 1;
			for ( int i = 1; i <= Size; ++i )
			{
				if ( i < FoundIndex )
				{
					Temp[i] = this->graph[ParentNumber]->Childs[i];
				}
				else
				{
					Temp[i] = this->graph[ParentNumber]->Childs[i + 1];
				}
			}
			
			this->graph[ParentNumber]->Childs = new int[Size];
			for ( int i = 0; i < Size; ++i )
			{
				this->graph[ParentNumber]->Childs[i] = Temp[i];
			}
		}
	}
}

void Graph::DeleteFromChilds(int Number, int ChildNumber)
{
	if( Number > 0 && Number < Count && ChildNumber >= 0 && ChildNumber < Count )
	{
		int Size = this->graph[ChildNumber]->Parents[0];
		int FoundIndex;
		bool Found = false;
		for( int i = 1; i <= Size; ++i)
		{
			if ( this->graph[ChildNumber]->Parents[i] == Number )
			{
				Found = true;
				FoundIndex = i;
				break;
			}
		}

		if (Found)
		{
			int * Temp = new int [Size];
			Temp[0] = Size - 1;
			for ( int i = 1; i <= Size; ++i )
			{
				if ( i < FoundIndex )
				{
					Temp[i] = this->graph[ChildNumber]->Parents[i];
				}
				else
				{
					Temp[i] = this->graph[ChildNumber]->Parents[i + 1];
				}
			}
			
			this->graph[ChildNumber]->Parents = new int[Size];
			for ( int i = 0; i < Size; ++i )
			{
				this->graph[ChildNumber]->Parents[i] = Temp[i];
			}
		}
	}
}

bool Graph::isChildExist(int ParentNumber, int ChildNumber)
{
	if ( ParentNumber >= 0 && ParentNumber < Count && ChildNumber > 0 && ChildNumber < Count )
	{
		int Size = this->graph[ParentNumber]->Childs[0];
		for ( int i = 1; i <= Size; ++i )
		{
			if ( this->graph[ParentNumber]->Childs[i] == ChildNumber )
			{
				return true;
			}
		}
	}
	return false;
}

bool Graph::isParentExist(int ChildNumber, int ParentNumber)
{
	if ( ParentNumber >= 0 && ParentNumber < Count && ChildNumber > 0 && ChildNumber < Count )
	{
		int Size = this->graph[ChildNumber]->Parents[0];
		for ( int i = 1; i <= Size; ++i )
		{
			if ( this->graph[ChildNumber]->Parents[i] == ParentNumber )
			{
				return true;
			}
		}
	}
	return false;
}

void Graph::DeleteItem ( int Number )
{
	if ( Number > 0 && Number < Count )
	{
		int pSize = this->graph[Number]->Parents[0];
		int cSize = this->graph[Number]->Childs[0];
		
		// Delete item from parents
		for( int i = 1; i <= pSize; ++i )
		{
			this->DeleteFromParent( Number, this->graph[Number]->Parents[i] );
		}

		// Delete childs from item
		for( int i = 1; i <= cSize; ++i )
		{
			this->DeleteFromChilds( Number, this->graph[Number]->Childs[i] ); 
		}

		// Copy graph
		Node ** Temp = new Node* [ Count ];
		for (int i = 0; i < Count; ++i)
		{
			Temp[i] = this->graph[i] ;
		}
		
		delete this->graph;
		this->graph = new Node*[  Count - 1 ];
		
		for (int i = 0; i < Count; ++i)
		{
			if ( i < Number )
			{
				this->graph[i] = Temp[i];
			}
			else
			{
				this->graph[i] = Temp[ i + 1 ];
			}
		}
		--Count;

		// Modify shifted nodes
		for( int i = 0; i < Count; ++i )
		{
			int pSize = this->graph[i]->Parents[0];
			int cSize = this->graph[i]->Childs[0];
			for ( int pCounter = 1; pCounter <= pSize; ++pCounter )
			{
				if( this->graph[i]->Parents[pCounter] >= Number )
				{
					this->graph[i]->Parents[pCounter] -= 1;
				}
			}

			for ( int cCounter = 1; cCounter <= cSize; ++cCounter )
			{
				if( this->graph[i]->Childs[cCounter] >= Number )
				{
					this->graph[i]->Childs[cCounter] -= 1;
				}
			}

		}			
		
	}
}

void Graph::Complete(int Number)
{
	this->graph[Number]->isReady = true;
}

void Graph::PrepareToDrawChart(int Number, int ParentCpu, int Step) 
{
	if( Number >= 0 && Number < Count )
	{
		int pSize = this->graph[ Number ]->Parents[0];
		if( pSize != 0 && pSize != 1 )
		{
			for( int i = 1; i <= pSize; ++i )
			{
				if ( !this->graph[ this->graph[Number]->Parents[i] ]->isReady )
				{
					return;
				}
			}
		}

		this->graph[ Number ]->Step = Step;
		this->graph[ Number ]->UsableCPU = ParentCpu;
		this->graph[ Number ]->isReady = true;

		int Size = this->graph[ Number ]->Childs[0];
		if( Size == 0 ) return;

		for( int i = 1; i <= Size; ++i )
		{
			PrepareToDrawChart( this->graph[ Number ]->Childs[i], ParentCpu + i - 1, Step + this->graph[Number]->Weight);
		}		
	}
}

int Graph::GetCpu(int Number)
{
	return this->graph[Number]->UsableCPU;
}

int Graph::GetStep(int Number)
{
	return this->graph[Number]->Step;
}
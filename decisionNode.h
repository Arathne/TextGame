#ifndef START_NODE_H
#define START_NODE_H

#include "node.h"

class DecisionNode : public Node
{
	public:
		DecisionNode (void);
		~DecisionNode (void);

		int process (void);	
};

#endif
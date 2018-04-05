#ifndef NODE_H
#define NODE_H
#include<string>

class Node
{
	public:
		Node(std::string compromisso,std::string data);
		~Node();
	
		std::string compromisso, data;
		Node *anterior, *proximo;
};

#endif

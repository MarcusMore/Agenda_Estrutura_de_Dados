#include "Node.h"

Node::Node(std::string compromisso,std::string data):compromisso(compromisso),data(data),anterior(NULL),proximo(NULL)
{
	/*
	this->compromisso=compromisso;
	this->data=data;
	anterior=NULL;
	proximo=NULL;
	*/
};

Node::~Node()
{
}

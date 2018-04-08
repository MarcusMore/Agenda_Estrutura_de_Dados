#ifndef DELETEDCOMPR_H
#define DELETEDCOMPR_H
#include "FIFO.h"
#include <string>

class DeletedCompr
{
	public:
		DeletedCompr();
		~DeletedCompr();
		FIFO old[6];
		bool inserir(std::string compr, std::string data);
		bool remover();
		FIFO getFIFO(std::string compr);
		int i,f;
	
		
};

#endif

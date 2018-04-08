#ifndef COMPROMISSO_H
#define COMPROMISSO_H
#include <string>
#include <cstdlib>
#include <iostream>
#include "Node.h"


class Compromisso
{
	public:
		Compromisso();
		~Compromisso();
		bool inserir(std::string compr, std::string date);
		bool removedate(std::string date);
		bool removecompromisso(std::string compr);
		bool inserirfim(std::string compr, std::string date);
		Node * retornacompromisso(std::string compromisso);
		std::string compromisso, data;
		Node *primeiro;
		Node *atual;
		Node *ultimo;
};

#endif

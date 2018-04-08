#include "Compromisso.h"
#include "Node.h"
#include <cstdlib>
#include <iostream>


Compromisso::Compromisso()
{
	atual=NULL;
	primeiro=NULL;
	ultimo=NULL;
}

Compromisso::~Compromisso()
{
}

bool Compromisso::inserir(std::string compr, std::string date){
			Node * novo = new Node(compr, date);
			Node * ant = primeiro;
			Node * atual=primeiro;
			while(atual!=NULL){
				ant=atual;
				atual=atual->proximo;
			}
			if(ant){
				ant->proximo=novo;
			}else{
				primeiro=novo;
			}
			
			novo->anterior=atual;
			
			return true;
		}

bool Compromisso::inserirfim(std::string compr, std::string date){
		Node * tmp = NULL;
		Node * novo = new Node(compr, date);
			if(ultimo){
				tmp=ultimo;
				novo->anterior=ultimo;
				ultimo->proximo=novo;
				ultimo=novo;
			}else if(!primeiro){
				primeiro=novo;
				ultimo=primeiro;
			}
				
			
		}

bool Compromisso::removedate(std::string date){
	Node*atual=primeiro;
	Node*tmp=atual;
	while(atual){
		if(atual->data==date){
			tmp=atual->anterior;
			tmp->proximo=atual->proximo;
			atual=atual->proximo;
			atual->anterior=tmp;
		}else{
			atual=atual->proximo;
		}
		
	}
}

bool Compromisso::removecompromisso(std::string compr){
	Node*atual=primeiro;
	Node*tmp=atual;
	while(atual){
		if(atual->data==compromisso){
			tmp=atual->anterior;
			tmp->proximo=atual->proximo;
			atual=atual->proximo;
			atual->anterior=tmp;
		}else{
			atual=atual->proximo;
		}
		
	}
}



Node * Compromisso::retornacompromisso(std::string compromisso){
	Node*atual=primeiro;
	Node*tmp=atual;
	while(atual && compromisso!=atual->compromisso){
			atual=atual->proximo;
			
	}
	if(!atual){
		atual=NULL;
	}
	return atual;
}
		

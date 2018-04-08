#include "DeletedCompr.h"
#include "FIFO.h"
#include <string>

DeletedCompr::DeletedCompr()
{
	i=f=0;
}

DeletedCompr::~DeletedCompr()
{
}

bool DeletedCompr::inserir(std::string compr, std::string data){
	if((f+1)%6==i){
		//lista cheia
		return false;
	}
	
	old[f].compromisso=compr;
	old[f].data=data;
	
	f=(f+1)%6;
	return true;
	
}

bool DeletedCompr::remover(){
      if(f==i){
        //lista vazia
        return false;
      }
      
      i=(i+1)%6;
    }

FIFO DeletedCompr::getFIFO(std::string compr){
	int passeio=i;
	FIFO retorno;
	while(passeio!=f && old[passeio].compromisso!=compr){
		passeio=(passeio+1)%6;
	}
	if(passeio!=f){
		retorno=old[passeio];
	}
	
	return retorno;
}  


#ifndef FIFO_H
#define FIFO_H
#include <string>

class FIFO
{
	public:
		FIFO(std::string compromisso, std::string data);
		FIFO();
		~FIFO();
		std::string compromisso;
		std::string data;
		
};

#endif

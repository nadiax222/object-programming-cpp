#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Sequence {
private:
	std::string dna;

public:
	void readFromFile(const std::string& filename);
	std::string getSequence() const;
};

#endif

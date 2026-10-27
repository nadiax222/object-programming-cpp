#ifndef DNA_COUNTER_H
#define DNA_COUNTER_H

#include "sequence.h"

class DnaCounter {
private:
	Sequence sequence;
public:
	DNACounter(Sequence seq);
	int countNucleotides(char nucleotide) const;
	void pritnNucleotideCounts() const;
};
#endif

#ifndef DNA_COUNTER_H
#define DNA_COUNTER_H

#include "sequence.h"

class DNACounter {
private:
    Sequence sequence;

public:
    DNACounter(Sequence seq);
    int countNucleotides(char nucleotide) const;
    void printNucleotideCounts() const;
};

#endif
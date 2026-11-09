#include "dnacounter.h"
#include <iostream>

DNACounter::DNACounter(Sequence seq)
    : sequence(seq) {
}

int DNACounter::countNucleotides(char nucleotide) const {
    int count = 0;

    for (char c : sequence.getSequence()) {
        if (c == nucleotide) {
            count++;
        }
    }

    return count;
}

void DNACounter::printNucleotideCounts() const {
    std::cout << countNucleotides('A') << " "
        << countNucleotides('C') << " "
        << countNucleotides('G') << " "
        << countNucleotides('T') << std::endl;
}
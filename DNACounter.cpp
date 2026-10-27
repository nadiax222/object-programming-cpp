#include dnacounter.h
#include <iostream>

DNACounter::DNACounter(Sequence seq) : sequence(seq) {}
int DNACounter::countNucleotides(char nucleotide) const {
	std::string dna = sequence.getSequence();
	int count = 0;
	for (char c : dna) {
		if (c == nucleotide) {
			count++;
		}
	}
	return count;
}
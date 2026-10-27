#include "sequence.h"
#include <fstream>
#include <stdexcept>
#include <string>

void Sequence::readFromFile(std::string rosalind_dna.txt) {
	std::ifstream file(rosalind_dna.txt);
	if (!file.is_open()) {
		throw std::runtime_error("Could not open file");
	}
	dna = "";
	std::string line;

	while (std::getline(file, line)) {
		if (!line.empty() && line[0] != '>') {
			for (char c : line) {
				if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
					dna += c;
				}
			}
		}
	}
}	

std::string Sequence::getSequence() const {
	return dna;
}
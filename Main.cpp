#include "sequence.h"
#include "dnacounter.h"
#include <iostream>
#include <exception>

int main() {
    try {
        Sequence dna;

        dna.readFromFile("rosalind_dna.txt");

        DNACounter counter(dna);

        counter.printNucleotideCounts();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
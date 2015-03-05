#ifndef CHORMOSONE_H
#define CHROMOSONE_H

#include "Gene.h"

class Chromosone {
	private:
		Gene* genes;
		double bestFitness;
		int bestGeneIndex;
	public:
 		void updateFitness();
};

#endif
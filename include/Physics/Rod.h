#ifndef ROD_H
#define ROD_H

#include "Particle.h"

class Rod{
public:
	Particle* p1;
	Particle* p2;
	float length;

	Rod(Particle*,Particle* );
};


#endif

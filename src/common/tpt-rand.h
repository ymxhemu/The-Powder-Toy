#ifndef TPT_RAND_
#define TPT_RAND_

#include <stdint.h>
#include "Singleton.h"

class RNG : public Singleton<RNG>
{
private:
	uint64_t s[2];
	uint64_t next();

public:
	unsigned int gen();
	int between(int lower, int upper);
	bool chance(int nominator, unsigned int denominator);
	float uniform01();

	RNG();
	void seed(unsigned int sd);
};

#endif /* TPT_RAND_ */

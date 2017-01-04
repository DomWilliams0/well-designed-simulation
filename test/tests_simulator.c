#include "helper.h"
#include "simulator/simulator.h"

UNIT_TEST(simulator_creation_destruction)
{
	struct simulator_state *sim;
	simulator_init(&sim);
	assert_non_null(sim);

	simulator_destroy(&sim);
	assert_null(sim);
}

UNIT_TEST(simulator_step)
{
	struct simulator_state *sim = (struct simulator_state *)*state;
	simulator_step(sim);

	// ...
}

REGISTER_TEST(simulator_creation_destruction);
REGISTER_TEST(simulator_step);

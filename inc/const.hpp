#ifndef CONST_HPP
#define CONST_HPP

#include <SFML/System.hpp>

#define CA constexpr auto

namespace cst
{

CA energy_loss{.1f}; // fraction
CA gravitational_acceleration{9.81f};
const sf::Vector2u window_size{600, 800};

	namespace ball
	{

	const sf::Vector2f start{150.f, 150.f};
	CA radius{10.f};

	} // namespace ball

} // namespace cst

#endif // CONST_HPP

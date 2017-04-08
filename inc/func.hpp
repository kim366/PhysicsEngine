#ifndef FUNC_HPP
#define FUNC_HPP

#include <SFML/Graphics.hpp>
#include <const.hpp>

namespace fnc
{

void clamp_to_window(sf::Transformable& t_)
{
	if (t_.getPosition().x < 0)
		t_.setPosition(0, t_.getPosition().y);

	if (t_.getPosition().y < 0)
		t_.setPosition(t_.getPosition().x, 0);

	if (t_.getPosition().x > cst::window_size.x)
		t_.setPosition(cst::window_size.x, t_.getPosition().y);

	if (t_.getPosition().y > cst::window_size.y)
		t_.setPosition(t_.getPosition().x, cst::window_size.y);
}

void bounce_on_window_border()
{
	
}

} // namespace fnc

#endif // FUNC_HPP
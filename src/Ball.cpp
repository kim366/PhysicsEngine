#include <Ball.hpp>
#include <func.hpp>
#include <stdio.h>

Ball::Ball()
{
	_shape.setPosition(cst::ball::start);
	_shape.setFillColor(sf::Color::Red);
	_shape.setOrigin(_shape.getRadius(), 2 * _shape.getRadius());
}

void Ball::draw(sf::RenderTarget &target_, sf::RenderStates states_) const
{
	target_.draw(_shape, states_);
}

void Ball::update(float delta_time_)
{
	if (_energy_loss < 1)
	{	
		_velocity.y += cst::gravitational_acceleration;


		if (_shape.getPosition().y >= cst::window_size.y)
		{
			fnc::clamp_to_window(_shape);
			_velocity.y = -_velocity.y * (1 - _energy_loss);
		}
	}

	_shape.move(_velocity  * delta_time_);

	fnc::clamp_to_window(_shape);
}

void Ball::print()
{
	std::printf("%.2f; %.2f\n", _shape.getPosition().y, _energy_loss);
}

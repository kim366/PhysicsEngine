#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics.hpp>
#include <const.hpp>

class Ball : public sf::Drawable
{
public:
					Ball();
	virtual void 	draw(sf::RenderTarget &target_, sf::RenderStates states_) const override;
	void 			update(float delta_time_);
	void 			print();

private:
	float			_energy_loss{cst::energy_loss};
	sf::CircleShape _shape{cst::ball::radius};
	sf::Vector2f	_velocity;
};

#endif // BALL_HPP

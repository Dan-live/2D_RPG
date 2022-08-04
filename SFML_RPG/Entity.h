#pragma once


#include "MovementComponent.h"
#include "AnimationComponent.h"

class Entity
{
private:
	void initVariables();

protected:

	sf::Sprite sprite;

	MovementComponent* movementComponent;
	AnimationComponent* animationComponent;

public:
	Entity();
	virtual ~Entity();

	//Componrnt functions
	void setTexture(sf::Texture& texure);
	void createMovementComponent(const float maxVelocity, const float acceleration, const float decleration);
	void createAnimationComponent(sf::Texture& texture_sheet);

	//Functions

	virtual void setPosition(const float x, const float y);
	virtual void move(const float x, const float y, const float& dt);

	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);
};


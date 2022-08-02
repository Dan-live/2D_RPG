#pragma once


#include "MovementComponent.h"

class Entity
{
private:
	void initVariables();

protected:

	sf::Sprite sprite;

	MovementComponent* movementComponent;

public:
	Entity();
	virtual ~Entity();

	//Componrnt functions
	void setTexture(sf::Texture& texure);
	void createMovementComponent(const float maxVelocity);
	//Functions

	virtual void setPosition(const float x, const float y);
	virtual void move(const float& dt, const float x, const float y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);
};


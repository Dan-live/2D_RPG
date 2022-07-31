#include "Entity.h"

void Entity::initVariables()
{
	this->texture = NULL;
	this->sprite = NULL;
	this->movementSpeed = 100.f;
}

Entity::Entity()
{
	this->initVariables();
	this->movementSpeed = 100.f;
}

Entity::~Entity()
{
	delete this->sprite;

}

//Componrnt functions
void Entity::createSprite(sf::Texture* texure)
{
	this->texture = texture;
	this->sprite->setTexture(*this->texture);
}


//Functions

void Entity::move(const float& dt, const float dir_x, const float dir_y)
{
	if (this->sprite)
	{
		this->sprite->move(dir_x * this->movementSpeed * dt, dir_y * this->movementSpeed * dt);

	}
}

void Entity::update(const float& dt)
{
	

}

void Entity::render(sf::RenderTarget* target)
{
	if (this->sprite)
	{
		target->draw(* this->sprite);
	}
	
}


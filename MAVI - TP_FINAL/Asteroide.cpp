#include "Asteroide.h"

Asteroide::Asteroide(string fileName, Vector2f vel) :BaseObjeto(fileName,vel)
{
	tex = new Texture();
	tex->loadFromFile(fileName);
	spr = new Sprite();
	spr->setTexture(*tex);
	velocity = vel;
	position.x = 0.0f;
	position.y = 0.0f;
	velocity.x = 0.0f;
	velocity.y = 0.0f;
	acceleration.x = 0.0f;
	acceleration.y = 0.0f;
}

Asteroide::~Asteroide()
{
	delete spr;
	delete tex;	
}

void Asteroide::Update(float delta_t)
{
	//aceleracion centripeda = (v)2 / r
}

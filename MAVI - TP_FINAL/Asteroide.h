#pragma once
#include "BaseObjeto.h"
class Asteroide : public BaseObjeto
{
public:
	Asteroide(string fileName, Vector2f vel); //constructor
	~Asteroide(); //destructor
	void Update(float delta_t);
private:
	Sprite* spr;
	Texture* tex;
	Vector2f position;
	Vector2f acceleration;
	Vector2f velocity;
	Clock* reloj1;
	Time* tiempo1;
};


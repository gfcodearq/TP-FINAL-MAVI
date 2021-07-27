#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;

class BaseObjeto
{
public:
	BaseObjeto(string fileName, Vector2f vel);
	~BaseObjeto(); //destructor
	void Draw(RenderWindow* wnd); //dibuja el objeto en pantalla
	void Update(float delta_t); //actualiza la posicion del objeto

	void SetScale(float uniformScale) {spr->setScale(uniformScale, uniformScale);} //setea la escala
	void SetPosition(Vector2f pos) { position = pos; } //setea la posicion
	void SetVelocity(Vector2f vel) { velocity = vel; } //setea la velocidad
	void SetAcceleration(Vector2f acc) { acceleration = acc; } //setea la aceleracion

	Vector2f GetPosition() { return position; } //devuelve la posicion
	Vector2f GetVelocity() { return velocity; } //devuelve la velocidad
	Vector2f GetAcceleration() { return acceleration; } //devuelve la aceleracion

	void AddAcceleration(Vector2f acc)
	{
		acceleration.x += acc.x;
		acceleration.y += acc.y;
	}
private:
	Sprite *spr;
	Texture *tex;
	Vector2f position;
	Vector2f acceleration;
	Vector2f velocity;
};


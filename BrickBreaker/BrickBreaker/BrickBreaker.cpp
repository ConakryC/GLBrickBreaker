#include <windows.h>
#include <math.h>
#include <gl/Gl.h>
#include <gl/Glu.h>
#include "glut.h"

int main() {
	return 0;
}

class Game {
public:

private:
};

class Brick {
public:
	Brick() { x = y = 0.0f; width = height = 0.0f; }
	Brick(float xNew, float yNew, float w, float h) { x = xNew; y = yNew; width = w; height = h; }
	void setState(GLboolean);
	void draw();
	void setLocation(GLfloat, GLfloat);
	void setSize(GLfloat, GLfloat);
private: 
	GLboolean state;
	GLfloat width, height;
	GLfloat x, y;
};

class Ball {

};

class Paddle {

};

void Brick::setLocation(GLfloat xNew, GLfloat yNew) {
	x = xNew;
	y = yNew;
}

void Brick::setSize(GLfloat w, GLfloat h) {
	width = w;
	height = h;
}

void Brick::setState(GLboolean s) {
	state = s;
}

void Brick::draw() {
	glRectf(x, y, x + width, y + height);
}

GLboolean collisionCheck() {

}
/// <summary>
/// Practical 5
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date 13/12/2017
/// </summary>
#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	isRunning = true;
}

void Game::update()
{
	cout << "Update up" << endl;
	//update keyboard input to tell which primitive to draw
	//if number 1 on the keyboard is pressed the primitive is set
	//to the drawing 1
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		primitive = 1;
	}
	//if number 2 on the keyboard is pressed the primitive is set
	//to the drawing 2
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
		primitive = 2;
	}
	//if number 3 on the keyboard is pressed the primitive is set
	//to the drawing 3
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
	{
		primitive = 3;
	}
	//if number 4 on the keyboard is pressed the primitive is set
	//to the drawing 4
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
	{
		primitive = 4;
	}
	//if number 5 on the keyboard is pressed the primitive is set
	//to the drawing 5
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
	{
		primitive = 5;
	}
	//if number 6 on the keyboard is pressed the primitive is set
	//to the drawing 6
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
	{
		primitive = 6;
	}
	//if number 7 on the keyboard is pressed the primitive is set
	//to the drawing 7
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
	{
		primitive = 7;
	}
	//if number 8 on the keyboard is pressed the primitive is set
	//to the drawing 8
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
	{
		primitive = 8;
	}
	//if number 9 on the keyboard is pressed the primitive is set
	//to the drawing 9
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
	{
		primitive = 9;
	}
	//if number 0 on the keyboard is pressed the primitive is set
	//to the drawing 0
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{
		primitive = 0;
	}

}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	//if primitive equals 1, set to drawing 1
	if (primitive == 1)
	{
		glBegin(GL_TRIANGLES);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 2, set to drawing 2
	if (primitive == 2)
	{
		glBegin(GL_POINTS);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 3, set to drawing 3
	if (primitive == 3)
	{
		glBegin(GL_LINES);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 4, set to drawing 4
	if (primitive == 4)
	{
		glBegin(GL_LINE_STRIP);
		{
			glVertex3f(0.0, 1.5, -5.0);
			glVertex3f(-0.1, 1.9, -5.0);
			glVertex3f(0.1, 1.9, -5.0);
		}
		glEnd();
	}
	//if primitive equals 5, set to drawing 5
	if (primitive == 5)
	{
		glBegin(GL_LINE_LOOP);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 6, set to drawing 6
	if (primitive == 6)
	{
		glBegin(GL_TRIANGLE_STRIP);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 7, set to drawing 7
	if (primitive == 7)
	{
		glBegin(GL_TRIANGLE_FAN);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 8, set to drawing 8
	if (primitive == 8)
	{
		glBegin(GL_QUADS);
		{
			glVertex3f(0.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 9, set to drawing 9
	if (primitive == 9)
	{
		glBegin(GL_QUAD_STRIP);
		{
			glVertex3f(-2.0, 2.0, -5.0);
			glVertex3f(2.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	//if primitive equals 0, set to drawing 0
	if (primitive == 0)
	{
		glBegin(GL_POLYGON);
		{
			glVertex3f(-2.0, 2.0, -5.0);
			glVertex3f(2.0, 2.0, -5.0);
			glVertex3f(-2.0, -2.0, -5.0);
			glVertex3f(2.0, -2.0, -5.0);
		}
		glEnd();
	}
	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}


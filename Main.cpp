#include<iostream>
//#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;
void display(void)
{
	/* clear all pixels */
	glClear(GL_COLOR_BUFFER_BIT);
	/* draw white polygon (rectangle) with corners at
	* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)

*/
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.25, 0.25, 0.0);
	glVertex3f(0.75, 0.25, 0.0);
	glVertex3f(0.75, 0.75, 0.0);
	glVertex3f(0.25, 0.75, 0.0);
	glEnd();
	/* don't wait!
	* start processing buffered OpenGL routines
	*/
	glFlush();
}

void displayAgain(void)
{
	/* clear all pixels */
	glClear(GL_COLOR_BUFFER_BIT);
	/* draw white polygon (rectangle) with corners at
	* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)

*/
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.25, 0.25, 0.0);
	glVertex3f(0.75, 0.25, 0.0);
	glVertex3f(0.75, 0.75, 0.0);
	glVertex3f(0.25, 0.75, 0.0);
	glEnd();
	/* don't wait!
	* start processing buffered OpenGL routines
	*/
	glFlush();
}

void init(void)
{
	/* select clearing (background) color */
	glClearColor(0.0, 0.0, 0.0, 0.0);
	/* initialize viewing values */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/

void keyboard(unsigned char key, int x, int y)
{
	cout << endl << "in keyboard" << endl;
	cout << endl << "Key value " << key << endl;
	switch (key)
	{
	case GLUT_KEY_UP:
		cout << endl << "UP" << endl;
	case GLUT_KEY_DOWN:
		cout << endl << "DOWN" << endl;
		break;
	case GLUT_KEY_LEFT:
		cout << endl << "LEFT" << endl;
		break;
	case GLUT_KEY_RIGHT:
		cout << endl << "RIGHT" << endl;
		break;
	}
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	int win1 = glutCreateWindow("LEFT");
	glutSetWindow(win1);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);


	/*glutInitWindowSize(250, 250);
	glutInitWindowPosition(350, 100);
	int win2 = glutCreateWindow("RIGHT");
	glutSetWindow(win2);
	glutDisplayFunc(displayAgain);
	init();*/
	glutMainLoop();
	return 0; /* ISO C requires main to return int. */
}
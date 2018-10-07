#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	float i = 0.0f;
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_POLYGON);

		
		
		std::cout << i << std::endl;
		glVertex3f(0.1, i, 0.1);
		glVertex3f(0.6, i+0.1f, 0.0);
		glVertex3f(0.8, i+0.3f, 0.0);
		glVertex3f(0.6, i+0.6f, 0.0);
		glVertex3f(0.1, i+0.6f, 0.0);
		glVertex3f(0.0, i+0.3f, 0.0);
		i = i + 0.001f;
		if (i > 0.360)
		{
			i = 0.0f;
		}

		
		glEnd();
		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
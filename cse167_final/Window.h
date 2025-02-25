#ifndef _WINDOW_H_
#define _WINDOW_H_

#ifdef __APPLE__
#define GLFW_INCLUDE_GLCOREARB
#include <OpenGL/gl3.h>
#else
#include <GL/glew.h>
#endif
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <ctime>

#include "Object.h"
#include "Cube.h"
#include "shader.h"
#include "OceanMesh.h"
#include "Skybox.h"
#include "Clouds.h"
#include "Skydome.h"
#include "PointLight.h"
#include "Object.h"

class Window
{
public:
	static bool initializeProgram();
	static bool initializeObjects();
	static void cleanUp();
	static GLFWwindow* createWindow(int width, int height);
	static void resizeCallback(GLFWwindow* window, int width, int height);
	static void idleCallback();
	static void displayCallback(GLFWwindow*);
	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
    static glm::vec3 trackBallMapping(glm::vec2 point);
    static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
    static void cursorPosCallback(GLFWwindow* window, double xpos, double ypos);
    static void rotateCamera(glm::vec3 rotAxis, float rotAngle);
    static void enableBloom();
    static void renderQuad();
};

#endif

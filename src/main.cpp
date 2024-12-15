#include <GLFW/glfw3.h>

int main(){

  if (!glfwInit()){
    return -1;
  }

  GLFWwindow* window = glfwCreateWindow(800, 450, "C++ OpenGL", NULL, NULL);

  if (!window)  {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)){
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);

    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}

#ifndef SCENE_H
#define SCENE_H


#include <glad/glad.h>
#include <GLFW/glfw3.h>



#include <string>
#include <iostream>

class Scene {
public:
    GLFWwindow* window;

    Scene(int width, int height, const std::string& title) {
        if (!glfwInit()) {
            std::cerr << "Failed to initialize GLFW!" << std::endl;
            exit(-1);
        }

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
        if (!window) {
            std::cerr << "Failed to create GLFW window!" << std::endl;
            glfwTerminate();
            exit(-1);
        }

        glfwMakeContextCurrent(window);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
            std::cerr << "Failed to initialize GLAD!" << std::endl;
            exit(-1);
        }

        glViewport(0, 0, width, height);
        glEnable(GL_DEPTH_TEST); // Enable depth testing
    }

    ~Scene() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    bool ShouldClose() const {
        return glfwWindowShouldClose(window);
    }

    void SwapBuffers() const {
        glfwSwapBuffers(window);
    }

    void PollEvents() const {
        glfwPollEvents();
    }
};

#endif // SCENE_H

#include "Scene.h"
#include "World.h"
#include "Transform.h"
#include "MeshRenderer.h"
#include "Camera.h"

int main() {
    Scene scene(800, 600, "ScarDue Engine");

    World world;

    Entity* entity = world.CreateEntity("Player");
    entity->AddComponent(std::make_unique<Transform>());
    entity->AddComponent(std::make_unique<MeshRenderer>());

    while (!scene.ShouldClose()) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Game logic updates and rendering here

        scene.SwapBuffers();
        scene.PollEvents();
    }

    return 0;
}

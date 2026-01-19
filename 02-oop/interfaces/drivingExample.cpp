#include <iostream>

class IRenderer
{
public:
    // this is a pure virtual fucntion
    virtual void Draw() = 0;
    virtual void Update() = 0;
    virtual void DrawOptimized() = 0;
};

class OpenGL : public IRenderer
{
public:
    void Draw() override
    {
        std::cout << "OpenGL::Draw\n";
    }
    void Update() override
    {
        std::cout << "OpenGL::Update\n";
    }

    void DrawOptimized() {}
};

class Vulkan : public IRenderer
{
public:
    void Draw() override
    {
        std::cout << "Vulkan::Draw\n";
    }
    void Update() override
    {
        std::cout << "Vulkan::Update\n";
    }

    void DrawOptimized() {}
};

int main()
{
    // IRenderer *myRenderer = new OpenGL;
    IRenderer *myRenderer = new Vulkan;
    myRenderer->Update();
    myRenderer->Draw();


    return 0;
}
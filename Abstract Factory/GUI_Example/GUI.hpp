//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_GUI_HPP
#define DESIGNPATTERNS_GUI_HPP
class Button {
public:
    virtual void render() = 0;
    virtual ~Button() = default;
};

class Checkbox {
public:
    virtual void render() = 0;
    virtual ~Checkbox() = default;
};

class WindowsButton : public Button {
public:
    void render() override {
        // Render a button in a Windows style
    }
};

class MacOSButton : public Button {
public:
    void render() override {
        // Render a button in a macOS style
    }
};

class WindowsCheckbox : public Checkbox {
public:
    void render() override {
        // Render a checkbox in a Windows style
    }
};

class MacOSCheckbox : public Checkbox {
public:
    void render() override {
        // Render a checkbox in a macOS style
    }
};
#endif//DESIGNPATTERNS_GUI_HPP

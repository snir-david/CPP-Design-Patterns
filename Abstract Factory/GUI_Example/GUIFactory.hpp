//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_GUIFACTORY_HPP
#define DESIGNPATTERNS_GUIFACTORY_HPP

#include "GUI.hpp"
#include <memory>

class GUIFactory {
public:
    virtual std::unique_ptr<Button> createButton() = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() = 0;
    virtual ~GUIFactory() = default;
};

class WindowsFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override { return std::make_unique<WindowsButton>(); }

    std::unique_ptr<Checkbox> createCheckbox() override { return std::make_unique<WindowsCheckbox>(); }
};

class MacOSFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override { return std::make_unique<MacOSButton>(); }

    std::unique_ptr<Checkbox> createCheckbox() override { return std::make_unique<MacOSCheckbox>(); }
};


// Usage
//std::unique_ptr<GUIFactory> factory;
//if (platform == "Windows") {
//    factory = std::make_unique<WindowsFactory>();
//} else if (platform == "MacOS") {
//    factory = std::make_unique<MacOSFactory>();
//}
//
//std::unique_ptr<Button> button = factory->createButton();
//std::unique_ptr<Checkbox> checkbox = factory->createCheckbox();
//
//button->render();
//checkbox->render();

#endif//DESIGNPATTERNS_GUIFACTORY_HPP

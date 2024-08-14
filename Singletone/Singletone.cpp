#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mutex;

    // Private constructor to prevent instantiation
    Singleton() {}

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton* getInstance() {
        if (instance == nullptr) {
            std::lock_guard<std::mutex> lock(mutex); // Thread safety
            if (instance == nullptr) {
                instance = new Singleton();
            }
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Singleton Instance" << std::endl;
    }
};

// Initialize static members
Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mutex;

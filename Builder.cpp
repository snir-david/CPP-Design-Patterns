#include <iostream>


class Level {
public:
    std::string Platform;
    std::string Character;
    std::string Enemy;
};

class MarioLevel : public Level {
};

class LevelBuilder {
public:

    virtual void setPlatform(std::string plat) {};

    virtual void setCharacter(std::string Char) {};

    virtual void setEnemy(std::string Enemy) {};

    virtual Level *getLevel() {};


};

class MarioBuilder : public LevelBuilder {
public:
    MarioLevel *level;

    MarioBuilder() {
        this->level = new MarioLevel();
    }

    void setPlatform(std::string plat) override {
        this->level->Platform = plat;
        std::cout << plat << std::endl;

    };

    void setCharacter(std::string Char) override {
        this->level->Character = Char;
        std::cout << Char << std::endl;


    };

    void setEnemy(std::string Enemy) override {
        this->level->Enemy = Enemy;
        std::cout << Enemy << std::endl;

    };

    Level *getLevel() override {
        return this->level;
    };
};

class LevelDirector {
public:
    virtual void construct(LevelBuilder *builder) {};
};

class BossLevel : public LevelDirector {
public:
    void construct(LevelBuilder *builder) override {
        std::cout << "Boss Level Created" << std::endl;
        builder->setPlatform("Mario Platform");
        builder->setCharacter("Mario Character");
        builder->setEnemy("Boss");
    }
};

//int main() {
//    LevelBuilder *MarioBuild = new MarioBuilder();
//    LevelDirector *BossLev = new BossLevel();
//    BossLev->construct(MarioBuild);
//    Level *l = MarioBuild->getLevel();
//    return 0;
//};



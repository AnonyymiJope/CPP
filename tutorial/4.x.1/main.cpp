#include <iostream>
#include <string>

enum class MonsterType {
    OGRE,
    DRAGON,
    ORC,
    SPIDER,
    SLIME
};

struct Monster {
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterType(Monster monster) {
    if (monster.type == MonsterType::OGRE)
        return "Ogre";
    if (monster.type == MonsterType::DRAGON)
        return "Dragon";
    if (monster.type == MonsterType::ORC)
        return "Orc";
    if (monster.type == MonsterType::SPIDER)
        return "Giant spider";
    if (monster.type == MonsterType::SLIME)
        return "Slime";

    return "unknown";
}

void printMonster(Monster monster) {
    std::cout <<  "This " << getMonsterType(monster) <<
                  " is named " << monster.name <<
                  " and has " << monster.health <<
                  " health."  << std::endl;
}

int main() {
    Monster Ogre = {MonsterType::OGRE, "Jouko", 45};
    Monster Slime = {MonsterType::SLIME, "Kosti", 40};

    printMonster(Ogre);
    printMonster(Slime);

    return 0;
}

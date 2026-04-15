#include <iostream>
#include <string>

class Entity{
protected:
    std::string name;
    int hp;
    int attack;
    int defense;
    int stamina;
    
public:
    Entity(std::string n, int h, int a, int d, int s) : name(n), hp(h), attack(a), defense(d), stamina(s) {}
    
    void takeDamage(int amount) {
        hp -= amount;
        std::cout << name << " take " << amount << " of damage. your actual hp is " << hp << std::endl;
        
    }
};

class ability{
    std::string a_name;
    int costEnergy;
    
public:
    ability(std::string n, int cost) : a_name(n), costEnergy(cost) {}
    
    virtual ~ability() {}
    
    virtual void activate() = 0;
    
    std::string getName() {return a_name;}
};

class HeavyAttack : public ability {
public:
    HeavyAttack() : ability("Critic attack", 30) {}
    
    void activate() override{
        std::cout << "[ABILITY] use " << a_name << ": Make 50 physics damage "
    }
};


class player : public Entity {
private:
    int level;
    
public:
    player(std::string n, int h, int l, int d, int s) : Entity(n, h, d, s), level(l) {}
    
    void usePotion() {
        hp += 20;
        std::cout << name << " use a potion. actual life: " << hp << std::endl;
    }
        
};

class Enemy : public Entity {
public:
    Enemy(std::string n, int h, int d) : Entity(n, h, d) {}
    
    void scream() {
        std::cout << name << " make a awful noise " << std::endl;
    }
};


int main()
{
    std::cout<<"Hello World";

    return 0;
}

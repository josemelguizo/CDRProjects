#include <iostream>
#include <string>
#include <string_view>

class Player
 {
 public:
 std::string p_name{};
 int p_hp{};
 int p_attack{};
 int p_defense{};
 int p_stamina{};

 Player(const std::string& playerName ="", int hp=0, int attack=0, int defense=0, int stamina=0) : 
 p_name{playerName}, p_hp{hp}, p_attack{attack}, p_defense{defense}, p_stamina{stamina}
 {
 }
 const std::string& getName() const { return p_name;}
 int getHp() const {return p_hp;}
 int getAttack() const {return p_attack;}
 int getDefense() const {return p_defense;}
 int getStamina() const {return p_stamina;}
 };

class Enemy
 {
 public:
 std::string e_name{};
 int e_hp{};
 int e_attack{};
 int e_defense{};
 int e_stamina{};

 Enemy(const std::string& enemyName ="", int hp=0, int attack=0, int defense=0, int stamina=0) : 
 e_name{enemyName}, e_hp{hp}, e_attack{attack}, e_defense{defense}, e_stamina{stamina}
 {
 }
 const std::string& getName() const { return e_name;}
 int getHp() const {return e_hp;}
 int getAttack() const {return e_attack;}
 int getDefense() const {return e_defense;}
 int getStamina() const {return e_stamina;}
 };


int main()
 {
 std::string playerName {};
 int hp, attack, defense, stamina;

 std::cout<<"Put Your Player Name ";
 std::cin >>playerName;

 std::cout<<"Your stats ";
 std::cout<<"Hp ";
 std::cin>>hp;

 std::cout<<"Attack ";
 std::cin>>attack;

 std::cout<<"Defense ";
 std::cin>>defense;

 std::cout<<"Stamina ";
 std::cin>>stamina;

 Player p1(playerName, hp, attack, defense, stamina);

 std::cout<<"Player " <<p1.getName() << " created with " <<p1.getHp() << " HP.";

 return 0;
 }
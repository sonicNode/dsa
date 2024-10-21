#include <iostream>
using namespace std;
template <class health_type, class energy_type, class level_type>
class Hero
{
private:
    health_type health;
    energy_type energy;
    level_type level;

public:
    Hero() {}                                                                            // default constructor
    Hero(health_type x, energy_type y, level_type z) : health(x), energy(y), level(z) {} // parameterized constructor
    void set_health(health_type x) { health = x; }
    void set_energy(energy_type energy) { this->energy = energy; }
    void set_level(level_type level) { this->level = level; }
    void print() { cout << "\n\nThe Health of the this hero is: " << health
                        << "\nThe energy of the hero is: " << energy
                        << "\nThe level of the hero is: " << level; }
};
int main()
{
    Hero<int, float, char> sonic(88, 7.9, 'C');
    Hero<int, float, char> *coral = new Hero<int, float, char>(99, 7.4, 'B');
    sonic.print();
    coral->print();
    delete (coral);
    coral->print();
    return 0;
}
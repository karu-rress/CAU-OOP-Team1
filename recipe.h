#ifndef _RECIPE_H_
#define _RECIPE_H_

#include <map>
#include <string>

// Recipe class
class Recipe {
public:
    // Recipe default constructor
    Recipe() = default;

    // Recipe constructor
    Recipe(std::string n);
    Recipe(std::string n, std::map<std::string, int> ingr, std::string instr, int time);

    // getter method
    std::string getName() const;
    std::map<std::string, int> getIngredients() const;
    std::string getInstructions() const;
    int getPrepTime() const;

    // Edit method
    void edit();

    // Display method
    void displayRecipe() const;

private:
    std::string name; // recipe name
    std::map<std::string, int> ingredients; // ingredients (name, quantity in grams)
    std::string instructions; // instruction
    int prepTime; // preparation time (minutes)
};

#endif
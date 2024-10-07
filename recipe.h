#ifndef _RECIPE_H_
#define _RECIPE_H_

#include <string>
#include <vector>

class Recipe {
private:
    std::string name;                                      // recipe name
    std::vector<std::pair<std::string, int>> ingredients;  // ingredients (name, quantity in grams)
    std::string instructions;                              // instruction
    int prepTime;                                          // preparation time (minutes)

public:
    // Recipe constructor
    Recipe(std::string n, std::vector<std::pair<std::string, int>> ingr, std::string instr, int time);

    // getter method
    std::string getName() const;                                 
    std::vector<std::pair<std::string, int>> getIngredients() const; 
    std::string getInstruction() const;      
    int getPrepTime() const;                           

    // Edit method 
    void edit();

    // Display method
    void displayRecipe() const;
};

#endif
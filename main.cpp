/**
 *
 * main.cpp
 *
 * @author: Na Sunwoo@CSE-23 (@karu-rress)
 * @brief: Entry point of IIKH program
 * @version: 0.1
 *
 */

// include user-defined libraries
#include "greeter.h"
#include "plan_manager.h"
#include "recipe_db.h"

int main() {
    // Initialize the plan manager and recipe database
    PlanManager planManager;
    RecipeDatabase recipeDB;

    // Initialize the greeter and connect
    // to the plan manager and recipe database
    Greeter greeter(planManager, recipeDB);

    greeter.run();

    return 0;
}
#include <iostream>
#include "CommandOrder.h"
#include "MonsterAttack.h"
#include "MonsterDefense.h"
#include "MonsterDie.h"

int main()
{
    CommandOrder commandOrder;

    MonsterAttack monsterAttack(&commandOrder);
    MonsterDefense monsterDefense(&commandOrder);
    MonsterDie monsterDie(&commandOrder);

    commandOrder.orederDie();
    commandOrder.orederAttack();
    commandOrder.orederDefense();
}
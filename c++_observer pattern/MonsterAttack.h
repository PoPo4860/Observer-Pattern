#pragma once
#include "Observer.h"
#include <iostream>
#include "CommandOrder.h"
class MonsterAttack : public Observer
{
public:
	MonsterAttack(CommandOrder* order) { order->Subscribe(this); }
private:

	virtual void OnNotify(const Subject* sender, Command command) override
	{
		if (command == Command::Attack)
		{
			std::cout << "공격행동 실행\n";
		}
	}
};
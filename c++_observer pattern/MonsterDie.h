#pragma once
#include "Observer.h"
#include <iostream>
class MonsterDie : public Observer
{
public:
	MonsterDie(CommandOrder* order) { order->Subscribe(this); }
private:
	virtual void OnNotify(const Subject* sender, Command command) override
	{
		if (command == Command::Die)
		{
			std::cout << "사망행동 실행\n";
		}
	}
};
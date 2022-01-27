#pragma once
#include "Observer.h"
#include <iostream>
class MonsterDefense : public Observer
{
public:

	MonsterDefense(CommandOrder* order) { order->Subscribe(this); }

private:

	virtual void OnNotify(const Subject* sender, Command command) override
	{
		if (command == Command::Defense)
		{
			std::cout << "방어행동 실행\n";
		}
	}
};
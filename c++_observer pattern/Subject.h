#pragma once
#include <vector>
#include "Observer.h"
class Observer;
class Subject
{
public:
	virtual		~Subject();

	void		Subscribe(Observer* observer);
	void		Desubscribe(Observer* observer);
	void		Notify(Command command);
private:
	std::vector<Observer*>	_observers;
};
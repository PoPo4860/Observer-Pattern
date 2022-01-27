#pragma once
#include "Subject.h"
class CommandOrder : public Subject
{
public:
	void orederDie() { Notify(Command::Die); }
	void orederAttack() { Notify(Command::Attack); }
	void orederDefense() { Notify(Command::Defense); }
};
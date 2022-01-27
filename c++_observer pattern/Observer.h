#pragma once
class Subject;
enum class Command
{
	Die,
	Attack,
	Defense
};
class Observer
{
public:
	virtual void OnNotify(const Subject* sender, Command command) = 0;
};
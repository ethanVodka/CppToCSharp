#include "pch.h"
#include "DllClass.h"


DllClass::DllClass(int a)
{
	this->x = a;
}

bool DllClass::ResistLibrary()
{
	return true;
}

bool DllClass::UpDateLibrary()
{
	return false;
}

bool DllClass::DeleteLibrary()
{
	return true;
}

int DllClass::AddFunction(int y)
{
	return this->x + y;
}

#pragma once
#ifndef ADD_SELECT_ACTION_H
#define ADD_SELECT_ACTION_H

#include "Actions/Action.h"

//Add Selection Action class
class AddSelectAction : public Action
{
private:
	Point P1; //the selected point inside the shape
	GfxInfo SelectedGfxInfo;
public:
	AddSelectAction(ApplicationManager* pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();

	//Add rectangle to the ApplicationManager
	virtual void Execute();
	
};

#endif
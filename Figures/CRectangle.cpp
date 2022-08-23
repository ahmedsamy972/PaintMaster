#include "CRectangle.h"

CRectangle::CRectangle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
}
	

void CRectangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawRect(Corner1, Corner2, FigGfxInfo, Selected);
}

bool CRectangle::IS_pin_shape(int x, int y)
{
	if ((x > Corner1.x && x < Corner2.x && y > Corner1.y && y < Corner2.y))
	{
		return true;
	}//(x > x1 and x < x2 and y > y1 and y < y2)
	else
	{
		return false;
	}
	
}

string CRectangle::print()
{
	string values;
	double area = 0;
	values = "This is a RECTANGLE.The ID: " + to_string(ID) + ". First Point: (" + to_string(Corner1.x) + ", " + to_string(Corner1.y) + "). Second Point: (" + to_string(Corner2.x) + ", " + to_string(Corner2.y) + "). The area of the rectangle is: " + to_string(area) + ".";
	return values;
}

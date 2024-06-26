#ifndef MOUSE_BUTTON_H
#define MOUSE_BUTTON_H

#include "CommonFunction.h"
#include "BaseObject.h"


class MouseButton
{
public:
	MouseButton();
	~MouseButton() { ; }

	void setPositionObject(int posx, int posy, int height, int weight);
	bool handleEvent(SDL_Event* event_, SDL_Renderer* renderer);

	SDL_Rect getClickRect() const;
private:
    SDL_Rect clickRect_; // More descriptive name
    bool isClicked_ = false;
//	SDL_Rect object_position_;
};

#endif

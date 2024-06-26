#ifndef PET_OBJECT_H
#define PET_OBJECT_H

#include "CommonFunction.h"
#include "BaseObject.h"
#include "PacmanObject.h"
#include "GameMap.h"
#include "PetObjectASTAR.h"
#include <unordered_set>
#include <limits>

class PetObject : public BaseObject {
public:
	PetObject();
	~PetObject(){ ; }

	void setStartPet(SDL_Renderer* renderer, SDL_Color* colorKey, int num = 5);
	void setPetNumber(const int petNumber);

    SDL_Rect getRect() const;

	bool loadImage(string path, SDL_Renderer* renderer, SDL_Color* colorKey = NULL);
	void setClips();

	void updateImageDirect(SDL_Renderer* renderer);

    void petMove(GameMap& checkMap);
	bool checkToMap(GameMap& checkMap);

	void autoInputDirect(GameMap& checkMap);

	void autoAiInputDirect(GameMap& checkMap, PacmanObject& pacman);
	void autoAStarInputDirect(GameMap& checkMap, PacmanObject& pacman);
	void setDirection(GameMap& checkMap, SDL_Renderer* renderer);

	void render(SDL_Renderer* renderer);
private:
	int current_frame_;

	int width_frame_;
	int height_frame_;

	int x_pos_;
	int y_pos_;

	int direction_current_;
	int direction_auto_;

	SDL_Rect clip_rect_[PET_FRAME_];

	int pet_number_;

};
#endif // PET_OBJECT_H




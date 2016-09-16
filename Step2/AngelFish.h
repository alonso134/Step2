/**
 * \file AngelFish.h
 *
 * \author Kaichen Xiao
 *
 * Class that implements a Angel Fish
 */

#pragma once
#include "Item.h"
#include <memory>
/**
 * Implementation of Angel Fish
 */
class CAngelFish : public CItem
{
public:
	CAngelFish(CAquarium * aquarium);

	/// Default constructor (disabled)
	CAngelFish() = delete;
	/// Copy constructor (disabled)
	CAngelFish(const CAngelFish &) = delete;
	/// Destructor
	virtual ~CAngelFish();
	void Draw(Gdiplus::Graphics * graphics);

	bool HitTest(int x, int y);

private:
	/// image object for fish
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};


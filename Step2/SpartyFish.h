/**
 * \file SpartyFish.h
 *
 * \author Kaichen Xiao
 *
 * Class that implements a Sparty Fish
 */

#pragma once
#include "Item.h"
#include <memory>
/**
 * Implementation for a Sparty Fish
 */
class CSpartyFish : public CItem
{
public:
	CSpartyFish(CAquarium *aquarium);

	/// Default Constructor (Disabled)
	CSpartyFish() = delete;
	/// Copy constructor (disabled)
	CSpartyFish(const CSpartyFish &) = delete;
	/// Destructor
	virtual ~CSpartyFish();
	void Draw(Gdiplus::Graphics * graphics);

	bool HitTest(int x, int y);

private:
	/// image object for fish
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};


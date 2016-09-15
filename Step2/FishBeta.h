/**
 * \file FishBeta.h
 *
 * \author Kaichen Xiao
 *
 * Class the implements a Beta fish
 */

#pragma once
#include "Item.h"
#include <memory>
/**
 * Implements a Beta fish
 */
class CFishBeta : public CItem
{
public:
	CFishBeta(CAquarium * aquarium);

	/// Default constructor (disabled)
	CFishBeta() = delete;
	/// Copy constructor (disabled)
	CFishBeta(const CFishBeta &) = delete;
	/// Destructor
	virtual ~CFishBeta();
	void Draw(Gdiplus::Graphics * graphics);

	bool HitTest(int x, int y);

private:
	/// image object for fish
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};


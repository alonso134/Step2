/**
 * \file KillerCarp.h
 *
 * \author Kaichen Xiao
 *
 * Class that implements a KILLER CARP
 */

#pragma once
#include "Item.h"
#include <memory>
/**
 * Implementation of a Killer Carp
 */
class CKillerCarp : public CItem
{
public:
	CKillerCarp(CAquarium * aquarium);

	/// Default constructor (disabled)
	CKillerCarp() = delete;
	/// Copy constructor (disabled)
	CKillerCarp(const CKillerCarp &) = delete;
	/// Destructor
	virtual ~CKillerCarp();
	void Draw(Gdiplus::Graphics * graphics);

	bool HitTest(int x, int y);

	/// Determine this item can eat fish
	bool CanEatFish() { return true; }
private:
	/// image object for fish
	std::unique_ptr<Gdiplus::Bitmap> mFishImage;
};


/**
 * \file Aquarium.h
 *
 * \author Kaichen Xiao
 *
 * Header file of CAquarium class
 */

#pragma once
#include <memory>
#include <vector>
#include "Item.h"

/**
 * Class that describles Aquarium
 */
class CAquarium
{
public:
	CAquarium();
	virtual ~CAquarium();

	void OnDraw(Gdiplus::Graphics * graphics);
	void Add(std::shared_ptr<CItem> item);
	std::shared_ptr<CItem> HitTest(int x, int y);
private:
	std::unique_ptr<Gdiplus::Bitmap> mBackground; ///< Background image to use
	/// All of the items to populate our aquarium
    std::vector<std::shared_ptr<CItem> > mItems;
};


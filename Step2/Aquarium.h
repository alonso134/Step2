/**
 * \file Aquarium.h
 *
 * \author Kaichen Xiao
 *
 * Header file of CAquarium class
 */

#pragma once
#include<memory>
/**
 * Class that describles Aquarium
 */
class CAquarium
{
public:
	CAquarium();
	virtual ~CAquarium();

	void OnDraw(Gdiplus::Graphics * graphics);
private:
	std::unique_ptr<Gdiplus::Bitmap> mBackground;///< Background image to use
};


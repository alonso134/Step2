/**
 * \file Item.cpp
 *
 * \author Kaichen Xiao
 */

#include "stdafx.h"
#include "Item.h"


 /** Constructor
 * \param aquarium The aquarium this item is a member of
 */
CItem::CItem(CAquarium *aquarium) : mAquarium(aquarium)
{
}


CItem::~CItem()
{
}

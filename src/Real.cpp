/*
 * Real.cpp
 *
 * Copyright (c) 2009 Jonathan Beck All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 */

#include <stdlib.h>
#include <plist/Real.h>

namespace PList
{

Real::Real() : Node(PLIST_REAL)
{
}

Real::Real(double d) : Node(PLIST_REAL)
{
    plist_set_real_val(_node, d);
}

Real::~Real()
{
}

void Real::SetValue(double d)
{
    plist_set_real_val(_node, d);
}

double Real::GetValue()
{
    double d = 0.;
    plist_get_real_val(_node, &d);
    return d;
}

};
/*
 * LIDAR System Library
 * Copyright (C) 2014  Branislav Holý <branoholy@gmail.com>
 *
 * This file is part of LIDAR System Library.
 *
 * LIDAR System Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LIDAR System Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LIDAR System Library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LSL_GEOM_LIDARLINE2_HPP
#define LSL_GEOM_LIDARLINE2_HPP

#include <iostream>

#include "line2.hpp"
#include "vector.hpp"

namespace lsl {
namespace geom {

class LidarLine2
{
private:
	Vector2d v;

public:
	LidarLine2(const Line2& line);

	double getL() const;
	double getPhi() const;

	void transform(double angle, double tx, double ty);
	void transform(double c, double s, double tx, double ty);

	double error(const LidarLine2& other, double phiA, double phiB);

	friend std::ostream& operator<<(std::ostream& out, const LidarLine2& lidarLine);
};

}}

#endif // LSL_GEOM_LIDARLINE2_HPP
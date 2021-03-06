/* Copyright (C) 2011 Uni Osnabrück
 * This file is part of the LAS VEGAS Reconstruction Toolkit,
 *
 * LAS VEGAS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * LAS VEGAS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA
 */

/**
 * TetraederTable.hpp
 *
 *  @date 23.11.2011
 *  @author Thomas Wiemann
 */

#ifndef TETRAEDERTABLE_HPP_
#define TETRAEDERTABLE_HPP_

namespace lvr
{

//const static int TetraederTable[16][7] = {
//        {-1, -1, -1, -1, -1, -1, -1},   //0
//        { 0,  3,  2, -1, -1, -1, -1},   //1
//        { 0,  1,  4, -1, -1, -1, -1},   //2
//        { 2,  1,  3,  3,  1,  4, -1},   //3 ??
//        { 3,  4,  5, -1, -1, -1, -1},   //4
//        { 2,  0,  5,  5,  0,  4, -1},   //5
//        { 3,  0,  1,  3,  1,  5, -1},   //6 ??
//        { 2,  1,  5, -1, -1, -1, -1},   //7
//        { 2,  1,  5, -1, -1, -1, -1},   //8
//        { 3,  0,  1,  3,  1,  5, -1},   //9 ??
//        { 2,  0,  5,  5,  0,  4, -1},   //10
//        { 3,  4,  5, -1, -1, -1, -1},   //11
//        { 2,  1,  3,  3,  1,  4, -1},   //12 ??
//        { 0,  1,  4, -1, -1, -1, -1},   //13
//        { 0,  3,  2, -1, -1, -1, -1},   //14
//        {-1, -1, -1, -1, -1, -1, -1}    //16
//};

const static int TetraederTable[16][7] = {
        {-1, -1, -1, -1, -1, -1, -1},   //0
        { 0,  3,  2, -1, -1, -1, -1},   //1
        { 0,  1,  4, -1, -1, -1, -1},   //2
        { 2,  1,  3,  3,  1,  4, -1},   //3 ??
        { 3,  4,  5, -1, -1, -1, -1},   //4
        { 2,  0,  5,  5,  0,  4, -1},   //5
        { 3,  0,  1,  3,  1,  5, -1},   //6 ??
        { 2,  1,  5, -1, -1, -1, -1},   //7
        { 2,  5,  1, -1, -1, -1, -1},   //8
        { 3,  1,  0,  3,  5,  1, -1},   //9 ??
        { 2,  5,  0,  5,  4,  0, -1},   //10
        { 3,  5,  4, -1, -1, -1, -1},   //11
        { 2,  3,  1,  3,  4,  1, -1},   //12 ??
        { 0,  4,  1, -1, -1, -1, -1},   //13
        { 0,  2,  3, -1, -1, -1, -1},   //14
        {-1, -1, -1, -1, -1, -1, -1}    //16
};


const static int TetraederIntersectionTable[6][6] =
{
        {0,  12,  8,  3, 16, 14},   // 0
        {16, 12, 14,  2,  1, 18},   // 1
        {18, 13,  7, 14,  2, 10},   // 2
        { 9,  4, 12,  1, 15, 18},   // 3
        { 4, 17,  7, 18, 15, 13},   // 4
        {15, 17, 13, 11,  5,  6}    // 5
};


const static int TetraederDefinitionTable[6][4] =
{
        {0, 1, 3, 4},   // 0
        {3, 1, 2, 4},   // 1
        {4, 2, 3, 7},   // 2
        {1, 5, 2, 4},   // 3
        {4, 5, 2, 7},   // 4
        {2, 5, 6, 7}    // 5
};

const static int TetraederNeighborTable[19][3] =
{
        {12, 10,  9}, // 0
        {22, 12, 21}, // 1
        {16, 12, 15}, // 2
        { 4,  3, 12}, // 3
        {14, 10, 11}, // 4
        {23, 22, 14}, // 5
        {14, 16, 17}, // 6
        { 4,  5, 14}, // 7
        { 4,  1, 10}, // 8
        {22, 19, 10}, // 9
        { 4,  7, 16}, // 10
        {22, 25, 16}, // 11
        {10, -1, -1}, // 12
        {16, -1, -1}, // 13
        { 4, -1, -1}, // 14
        {22, -1, -1}, // 15
        {12, -1, -1}, // 16
        {14, -1, -1}, // 17
        {-1, -1, -1}  // 18
};

const static int TetraederVertexNBTable[19][3] = {
        { 4,  2,  6}, // 0
        { 3,  5,  7}, // 1
        { 0,  6,  4}, // 2
        { 1,  5,  7}, // 3
        { 0,  6,  2}, // 4
        { 3,  7,  1}, // 5
        { 2,  4,  0}, // 6
        { 5,  1,  3}, // 7
        { 9, 11, 10}, // 8
        { 8, 10, 11}, // 9
        {11,  9,  8}, // 10
        {10,  8,  9}, // 11
        {13, -1, -1}, // 12
        {12, -1, -1}, // 13
        {15, -1, -1}, // 14
        {14, -1, -1}, // 15
        {17, -1, -1}, // 16
        {16, -1, -1}, // 17
        {-1, -1, -1}  // 18
};

} /* namespace lvr */
#endif /* TETRAEDERTABLE_HPP_ */

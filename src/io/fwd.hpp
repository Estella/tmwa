#pragma once
//    io/fwd.hpp - Forward declarations of I/O classes
//
//    Copyright © 2013 Ben Longbons <b.r.longbons@gmail.com>
//
//    This file is part of The Mana World (Athena server)
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "../sanity.hpp"

#include "../ints/fwd.hpp" // rank 1
#include "../strings/fwd.hpp" // rank 1
#include "../compat/fwd.hpp" // rank 2
#include "../generic/fwd.hpp" // rank 3
// io/fwd.hpp is rank 4


namespace tmwa
{
namespace io
{
    class ReadFile;
    class WriteFile;
    class AppendFile;
    class LineReader;
    class LineCharReader;
    class Line;
    class LineChar;
    class LineSpan;
    template<class T>
    class Spanned;
} // namespace io
} // namespace tmwa

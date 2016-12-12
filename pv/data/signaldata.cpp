/*
 * This file is part of the PulseView project.
 *
 * Copyright (C) 2012 Joel Holdsworth <joel@airwebreathe.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include "signaldata.h"

namespace pv {
namespace data {

SignalData::SignalData() :
	_start_time(0),
	_samplerate(0)
{
}

double SignalData::samplerate() const
{
	return _samplerate;
}

void SignalData::set_samplerate(double samplerate)
{
	_samplerate = samplerate;
	clear();
}

double SignalData::get_start_time() const
{
	return _start_time;
}

} // namespace data
} // namespace pv

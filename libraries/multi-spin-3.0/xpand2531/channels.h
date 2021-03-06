// 
// SPAN Lab (The University of Utah) and Xandem Technology Copyright 2012-2013
// 
// Author(s):
// Maurizio Bocca (maurizio.bocca@utah.edu)
// Joey Wilson (joey@xandem.com)
// Neal Patwari (neal@xandem.com)
// 
// This file is part of multi-Spin.
// multi-Spin is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// multi-Spin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with multi-Spin. If not, see <http://www.gnu.org/licenses/>.
// 

#ifndef XPAND_CHANNELS_H
#define XPAND_CHANNELS_H

// Number of frequency channels
#define CHANNELS_NUMBER 4

// Frequency channels
// REMEMBER: the first channel in the arracy is the "default" channel, i.e., the
// frequency channel all the nodes will switch back to whenever they don't hear
// from other neighboring nodes (this avoid nodes asynchronously looping on the
// defined frequency channels without communicating)
//char channel_sequence[CHANNELS_NUMBER] = { 11, 15, 19, 23 };
//char channel_sequence[CHANNELS_NUMBER] = { 12, 16, 20, 24 };
//char channel_sequence[CHANNELS_NUMBER] = { 13, 17, 21, 25 };
char channel_sequence[CHANNELS_NUMBER] = { 14, 18, 22, 26 };

#endif

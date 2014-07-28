/* horst - Highly Optimized Radio Scanning Tool
 *
 * Copyright (C) 2005-2014 Bruno Randolf (br1@einfach.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _WLAN_UTIL_H_
#define _WLAN_UTIL_H_

char
get_packet_type_char(unsigned int type);

const char*
get_packet_type_name(unsigned int type);

int
rate_to_index(int rate);

int
rate_index_to_rate(int idx);

int
mcs_index_to_rate(int mcs, int ht20, int lgi);

struct packet_info;

void
wlan_parse_information_elements(unsigned char *buf, int len, struct packet_info *p);

#endif
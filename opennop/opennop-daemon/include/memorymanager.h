/*

  memorymanager.h

  This file is part of OpenNOP-SoloWAN distribution.
  No modifications made from the original file in OpenNOP distribution.

  Copyright (C) 2014 OpenNOP.org (yaplej@opennop.org)

    OpenNOP is an open source Linux based network accelerator designed 
    to optimise network traffic over point-to-point, partially-meshed and 
    full-meshed IP networks.

  References:

    OpenNOP: http://www.opennop.org

  License:

    OpenNOP is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenNOP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef MEMORYMANAGER_H_
#define MEMORYMANAGER_H_

#include "queuemanager.h"
#include "packet.h"

void *memorymanager_function(void *dummyPtr);

int allocatefreepacketbuffers(struct packet_head *queue, int bufferstoallocate);

struct packet *get_freepacket_buffer(void);

int put_freepacket_buffer(struct packet *thispacket);

#endif /*MEMORYMANAGER_H_*/

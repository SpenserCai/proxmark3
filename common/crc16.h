//-----------------------------------------------------------------------------
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// CRC16
//-----------------------------------------------------------------------------
#ifndef __CRC16_H
#define __CRC16_H

#include <stdint.h>
#include "util.h"   // SwapBits

unsigned short update_crc16(unsigned short crc, unsigned char c);
uint16_t crc16(uint8_t const *message, int length, uint16_t remainder, uint16_t polynomial);
uint16_t crc16_ccitt(uint8_t const *message, int length);
uint16_t crc16_ccitt_kermit(uint8_t const *message, int length);
#endif

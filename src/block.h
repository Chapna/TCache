/*
 * In The Name Of God
 * ========================================
 * [] File Name : block.h
 *
 * [] Creation Date : 27-02-2015
 *
 * [] Last Modified : Fri 27 Feb 2015 10:06:59 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>

/*
 * Cache block structure
 * 64      0
 * +-------+
 * |  tag  |
 * +-------+
*/
struct block {
	uint64_t tag;
	uint8_t valid;
	uint64_t access;
	struct block *next;
};

struct block *block_new(void);
void block_delete(struct block *block);

#endif

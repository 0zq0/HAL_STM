#ifndef _CIRCLE_BUF_H
#define _CIRCLE_BUF_H

#include <stdint.h>
#include <stdio.h>
// 返回码定义
#define CIRCLE_BUF_OK     0    // 操作成功
#define CIRCLE_BUF_EMPTY  -1   // 缓冲区空，读失败
#define CIRCLE_BUF_FULL   -2   // 缓冲区满，写失败

typedef struct circle_buf{
	uint32_t r;		// 读指针 read
	uint32_t w;		// 写指针 write
	uint32_t len;	// 缓冲区总容量
	uint8_t *buf;	// 数据缓存区
	
}circle_buf,*p_circle_buf;

void circle_buf_Init(p_circle_buf pCircleBuf,uint32_t len,uint8_t *buf);

int circle_buf_read(p_circle_buf pCircleBuf,uint8_t *pVal);

int circle_buf_write(p_circle_buf pCircleBuf,uint8_t val);

#endif

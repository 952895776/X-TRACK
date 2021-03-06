#ifndef __DATA_PROC_H
#define __DATA_PROC_H

#include "Utils/DataCenter/DataCenter.h"
#include "../HAL/HAL_Def.h"
#include "DataProc_Def.h"

#define DATA_PROC_INIT_DEF(name) void _DP_##name##_Init(Account* account)

void DataProc_Init();

namespace DataProc
{

DataCenter* Center();
uint32_t    GetTick();
uint32_t    GetTickElaps(uint32_t prevTick);
const char* ConvTime(uint64_t ms, char* buf, uint16_t len);

void IMU_Commit(HAL::IMU_Info_t* info);
void MAG_Commit(HAL::MAG_Info_t* info);

}

#endif

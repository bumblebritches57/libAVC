#include "../../libModernAVC.h"

#pragma once

#ifndef LIBMODERNAVC_COMMON_H
#define LIBMODERNAVC_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif
    
    int8_t   MacroBlock2SliceGroupMap(EncodeAVC *Enc, uint8_t CurrentMacroBlock);
    
    int64_t  Abs(int64_t X);
    
    int64_t  Min(int64_t X, int64_t Y);
    
    int64_t  Max(int64_t X, int64_t Y);
    
    int64_t  InverseRasterScan(int64_t A, int64_t B, int64_t C, int64_t D, int64_t E);
    
    int64_t  Clip3(int16_t X, int16_t Y, int16_t Z);
    
    int64_t  Clip1Luma(int16_t X, uint8_t BitDepth);
    
    int64_t  Clip1Chroma(int16_t X, uint8_t BitDepth);
    
    int64_t  Median(double X, double Y, double Z);
    
    int8_t   Sign(double X);
    
    int64_t  Round(double X);
    
    bool     AreAllViewsPaired(EncodeAVC *Enc);
    
    void     rbsp_slice_trailing_bits(EncodeAVC *Enc, BitBuffer *BitB);
    
    uint8_t  MacroBlockPartitionPredictionMode(EncodeAVC *Enc, uint8_t MacroBlockType, uint8_t PartitionNumber);
    
    uint64_t NextMacroBlockAddress(EncodeAVC *Enc, uint64_t CurrentMacroBlockAddress);
    
    uint8_t  NumberOfSubMacroBlockPartitions();
    
    uint8_t  CalculateNumberOfTimeStamps(EncodeAVC *Enc);
    
#ifdef __cplusplus
}
#endif

#endif /* LIBMODERNAVC_COMMON_H */

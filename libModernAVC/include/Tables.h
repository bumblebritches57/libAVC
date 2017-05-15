#include <stdbool.h>
#include <stdint.h>

#pragma once

#ifndef LIBMODERNAVC_TABLES_H
#define LIBMODERNAVC_TABLES_H

#ifdef __cplusplus
extern "C" {
#endif
    
    
    static const int8_t ScalingList4x4[16] = {
        
    };
    
    static const int8_t xDZL[20] = { // Table 8-11
        0, 1, 0, 1, -2, -1, 0, 1, 2, 3, -2, -1, 0, 1, 2, 3, 0, 1, 0, 1
    };
    
    static const int8_t yDZL[20] = { // Table 8-11
        -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3
    };
    
    static const int8_t xFracL[16] = { // Table 8-12
        0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3
    };
    
    static const int8_t yFracL[16] = { // Table 8-12; there's a 3rd table but it's confusing named predPartLXL
        0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3
    };
    
    static const uint8_t ZigZagScan4x4[16] = { // Table 8-13, zig-zag
        0, 1, 4, 8, 5, 2, 3, 6, 9, 12, 13, 10, 7, 11, 14, 15
    };
    
    static const uint8_t FieldScan4x4[16] = { // Table 8-13, field
        0, 4, 1, 8, 12, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15
    };
    
    static const uint8_t ZigZagScan8x8[64] = { // Table 8-14, zig-zag
         0,  1,  8, 16,  9,  2,  3, 10, 17, 24, 32, 25, 18, 11,  4,  5,
        12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13,  6,  7, 14, 21, 28,
        35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51,
        58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63
    };
    
    static const uint8_t FieldScan8x8[64] = { // Table 8-14, field
         0,  8, 16,  1,  9, 24, 32, 17,  2, 25, 40, 48, 56, 33, 10,  3,
        18, 41, 49, 57, 26, 11,  4, 19, 34, 42, 50, 58, 27, 12,  5, 20,
        35, 43, 51, 59, 28, 21,  6, 21, 36, 44, 52, 60, 29, 14, 22, 37,
        45, 53, 61, 30,  7, 15, 38, 46, 54, 62, 23, 31, 39, 47, 55, 63
    };
    
    static const uint16_t ISOTable[31] = {
           0,   10,   12,   16,   20,   25,   32,   40,
          50,   64,   80,  100,  125,  160,  200,  250,
         320,  400,  500,  640,  800, 1000, 1250, 1600,
        2000, 2500, 3200, 4000, 5000, 6400, 8000
    };
    
    static const uint8_t qCodIRangeIdx[4][64] = { // Table 9-44, qCodIRangeIdx
        {
            128, 128, 128, 123, 116, 111, 105, 100,
             95,  90,  85,  81,  77,  73,  69,  66,
             62,  59,  56,  53,  51,  48,  46,  43,
             41,  39,  37,  35,  33,  32,  30,  29,
             27,  26,  24,  23,  22,  21,  20,  19,
             18,  17,  16,  15,  14,  14,  13,  12,
             12,  11,  11,  10,  10,   9,   9,   8,
              8,   7,   7,   7,   6,   6,   6,   2
        }, // 0
        {
            176, 167, 158, 150, 142, 135, 128, 122,
            116, 110, 104,  99,  94,  89,  85,  80,
             76,  72,  69,  65,  62,  59,  56,  53,
             50,  48,  45,  43,  41,  39,  37,  35,
             33,  33,  31,  30,  28,  27,  26,  24,
             23,  22,  20,  19,  18,  17,  16,  15,
             14,  14,  13,  12,  12,  11,  11,  10,
              9,   9,   9,   8,   8,   7,   7,   2,
        }, // 1
        {
            208, 197, 187, 178, 169, 160, 152, 144,
            137, 130, 123, 117, 111, 105, 100,  95,
             90,  86,  81,  77,  73,  69,  66,  63,
             59,  56,  54,  51,  48,  46,  43,  41,
             39,  37,  35,  33,  32,  30,  29,  27,
             26,  25,  23,  22,  21,  20,  19,  18,
             17,  16,  15,  15,  14,  13,  12,  12,
             11,  11,  10,  10,   9,   9,   8,   2
        }, // 2
        {
            240, 227, 216, 205, 195, 185, 175, 166,
            158, 150, 142, 135, 128, 122, 116, 110,
            104,  99,  94,  89,  85,  80,  76,  72,
             69,  65,  62,  59,  56,  53,  50,  48,
             45,  43,  41,  39,  37,  35,  33,  31,
             30,  28,  27,  25,  24,  23,  22,  21,
             20,  19,  18,  17,  16,  15,  14,  14,
             13,  12,  12,  11,  11,  10,   9,   2,
        }, // 3
    };
    
    static const uint8_t transIdxLPS[64] = { // Table 9-45, transIdxLPS
         0,  0,  1,  2,  2,  4,  4,  5,  6,  7,  8,  9,  9, 11, 11, 12,
        13, 13, 15, 15, 16, 16, 18, 18, 19, 19, 21, 21, 22, 22, 23, 24,
        24, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 30, 31, 32, 32,
        33, 33, 33, 34, 34, 35, 35, 35, 36, 36, 36, 37, 37, 38, 38, 63
    };
    
    static const uint8_t transIdxMPS[64] = { // Table 9-45, transIdxMPS
         1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16,
        17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
        33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 62, 63
    };
    
    static const uint8_t V4x4[6][3] = { // 8-315
        {10, 16, 13},
        {11, 18, 14},
        {13, 20, 16},
        {14, 23, 18},
        {16, 25, 20},
        {18, 29, 23}
    };
    
    static const uint8_t V8x8[6][6] = {
        {20, 18, 32, 19, 25, 24},
        {22, 19, 35, 21, 28, 26},
        {26, 23, 42, 24, 33, 31},
        {28, 25, 45, 26, 35, 33},
        {32, 28, 51, 30, 40, 38},
        {36, 32, 58, 34, 46, 43}
    };
    
    static const uint8_t Luma4x4ZigZagScan[16] = { // Table 6-10, TODO: this needs to be redone
        0, 1, 4, 8, 5, 2, 3, 6, 9, 12, 13, 10, 7, 11, 14, 15
    };
    
    /*
    static const uint8_t sub_mb_type[2][] = { // 0 = p, 1 = b
        {},
        {}
    };
     */
    
    static const uint8_t CBPCAT12Intra[48] = { // Table 9-4, coded_block_pattern, ChromaArrayType = 1 or 2
        47, 31, 15,  0, 23, 27, 29, 30,
         7, 11, 13, 14, 39, 43, 45, 46,
        16,  3,  5, 10, 12, 19, 21, 26,
        28, 35, 37, 42, 44,  1,  2,  4,
         8, 17, 18, 20, 24,  6,  9, 22,
        25, 32, 33, 34, 36, 40, 38, 41,
    };
    
    static const uint8_t CBPCAT12Inter[48] = { // Table 9-4, coded_block_pattern, ChromaArrayType = 1 or 2
        0, 16,  1,  2,  4,  8, 32,  3,
        5, 10, 12, 15, 47,  7, 11, 13,
        14,  6,  9, 31, 35, 37, 42, 44,
        33, 34, 36, 40, 39, 43, 45, 46,
        17, 18, 20, 24, 19, 21, 26, 28,
        23, 27, 29, 30, 22, 25, 38, 41
    };
    
    static const uint8_t CBPCAT03Intra[16] = { // Table 9-4, coded_block_pattern, ChromaArrayType = 0 or 3
        15,  0, 7, 11, 13, 14, 3, 5,
        10, 12, 1,  2,  4,  8, 6, 9
    };
    
    static const uint8_t CBPCAT03Inter[16] = { // Table 9-4, coded_block_pattern, ChromaArrayType = 0 or 3
        0,  1,  2,  4,  8,  3, 5, 10,
        12, 15, 7, 11, 13, 14, 6,  9
    };
    
    static const uint8_t CABACSliceInit[] = {
        
    };
    
    /*
     static const uint8_t Intra_4x4[16] = { // Table 7-3, Default_4x4_Intra
     6, 13, 13, 20, 20, 20, 28, 28, 28, 28, 32, 32, 32, 37, 37, 42
     };
     
     static const uint8_t Inter_4x4[16] = { // Table 7-3, Default_4x4_Inter
     10, 14, 14, 20, 20, 20, 24, 24, 24, 24, 27, 27, 27, 30, 30, 34
     };
     
     static const uint8_t Intra_8x8[64] = { // Table 7-4, Default_8x8_Intra
     6, 10, 10, 13, 11, 13, 16, 16, 16, 16, 18, 18, 18, 18, 18, 23,
     23, 23, 23, 23, 23, 25, 25, 25, 25, 25, 25, 25, 27, 27, 27, 27,
     27, 27, 27, 27, 29, 29, 29, 29, 29, 29, 29, 31, 31, 31, 31, 31,
     31, 33, 33, 33, 33, 33, 36, 36, 36, 36, 38, 38, 38, 40, 40, 42
     };
     
     static const uint8_t Inter_8x8[64] = { // Table 7-4, Default_8x8_Inter
     9, 13, 13, 15, 13, 15, 17, 17, 17, 17, 19, 19, 19, 19, 19, 21,
     21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 24, 24, 24, 24,
     24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 27, 27, 27, 27, 27,
     27, 28, 28, 28, 28, 28, 30, 30, 30, 30, 32, 32, 32, 33, 33, 35
     };
     */
    
#ifdef __cplusplus
}
#endif

#endif /* LIBMODERNAVC_TABLES_H */

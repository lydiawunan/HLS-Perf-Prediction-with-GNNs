#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 865628116
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p)
{
  long long v_19;
  unsigned long long v_17;
  unsigned short v_14;
  unsigned short v_12;
  signed char v_10;
  unsigned int v_8;
  long long v_6;
  unsigned long long v_4;
  unsigned char v;
  unsigned short result;
  v_19 = 40839LL;
  v_17 = 18446744073709534992ULL;
  v_14 = (unsigned short)p;
  v_12 = (unsigned short)5691;
  v_10 = (signed char)p;
  v_8 = 4294965686U;
  v_6 = 762315930LL;
  v_4 = (unsigned long long)p;
  v = (unsigned char)170;
  result = (unsigned short)p;
  while (v_6 / (long long)((int)v_12 + 16) == 39LL) {
    v_19 ^= 18LL;
    result = (unsigned short)(! (21493UL >> (p & 31L)));
    v_6 = (long long)((unsigned long long)(-45 % ((int)(! result) + 917)) - 
                      (v_17 % (unsigned long long)(v_8 + 25U)) / (unsigned long long)(
                      (int)(- v) + 573));
    v_12 = (unsigned short)(! (! (p % -6177L)));
  }
  while_0_break: ;
  while ((unsigned long long)(~ v) - (222ULL + (v_4 ^ 18446744073709548991ULL)) >= (
         285863153ULL | (v_4 - (unsigned long long)(- v_6)))) {
    v_6 = (long long)((int)(~ v_12) * (int)(- v_14) + ~ ((int)v_14 + -14424));
    v_4 = (unsigned long long)(! (v_8 * (unsigned int)((int)v_10 + 115)));
    v = (unsigned char)37;
  }
  while_0_break_0: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 404231634
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, long long p_15)
{
  short v_17;
  unsigned short v_13;
  int v_10;
  unsigned short v_8;
  short v_6;
  unsigned int v_4;
  unsigned char v;
  signed char result;
  v_17 = (short)p;
  v_13 = (unsigned short)p_15;
  v_10 = 6973;
  v_8 = (unsigned short)p_15;
  v_6 = (short)-20264;
  v_4 = (unsigned int)p;
  v = (unsigned char)p;
  result = (signed char)-26;
  while ((long long)v_4 < (long long)((unsigned int)v_13 / (~ v_4 + 531U)) / (
                          p_15 + 512LL)) {
    v_6 = (int)v_17 >> 12LL;
    v_10 = (int)(p_15 * 151239910LL + (long long)(~ (v_4 * 4294924130U)));
    v_17 = (short)(! p);
    v_4 = (unsigned int)v;
  }
  while_0_break: ;
  while ((unsigned int)(~ ((int)((unsigned char)-6.82486702001e+37) / 71)) > 
         (unsigned int)((int)v << 1L) + v_4) {
    result = (unsigned long long)v_10 % (((unsigned long long)v_8 + (unsigned long long)v_6 / 18446744073709515761ULL) + 655ULL);
    v_10 = (int)(! (unsigned char)131);
    v_4 = (unsigned int)p;
    v = (unsigned char)116;
  }
  while_0_break_0: ;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965041706
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p[2], long p_4[5], unsigned int p_6,
          unsigned long long p_8, char p_10)
{
  unsigned long v_19;
  double v_17;
  unsigned short v_15;
  unsigned short v_13;
  short v;
  short result;
  v_19 = (unsigned long)p_10;
  v_17 = -1.48719317691e+38;
  v_15 = (unsigned short)p_4[3];
  v_13 = (unsigned short)47140;
  v = (short)-31838;
  result = (short)p_6;
  while ((double)(~ ((int)p_10 / (((int)p_10 + (int)result) + 978))) < 
         (double)((unsigned long long)v_13 * 34110ULL - (unsigned long long)(
                  p_6 - (unsigned int)v_15)) + v_17) {
    v_19 += 8898UL;
    v_15 = (unsigned short)(~ ((unsigned long long)p_10 * p_8) - (((unsigned long long)result & p[1]) ^ 352ULL));
    v = (short)(! p_4[2] + p_4[2] / 709819573L);
    v_15 = (unsigned short)((int)(- v_13) - (int)(! v_15));
  }
  while_0_break: ;
  if (! p_8 <= (unsigned long long)p_10 / (((unsigned long long)((int)v + (int)result) - 
                                            p[1] / (unsigned long long)(
                                            p_4[1] + 632L)) + 254ULL)) 
    result = (short)p[0];
  else result = (short)-1191;
  return result;
}



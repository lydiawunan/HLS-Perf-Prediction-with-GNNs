#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299652698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[1], short p_4, float p_6, unsigned long p_9,
                unsigned char p_11)
{
  long long v_23;
  unsigned long v_21;
  short v_19;
  unsigned int v_17;
  unsigned int v_15;
  unsigned long v_13;
  int v;
  signed char result;
  v_23 = 60024LL;
  v_21 = 3273319556UL;
  v_19 = (short)-17006;
  v_17 = 3369389463U;
  v_15 = (unsigned int)p_9;
  v_13 = 466808616UL;
  v = -32091;
  result = (signed char)p_4;
  while ((int)(~ (! (- v_19))) == 23458) {
    result = v_21 ^ 3599854408UL;
    v_15 = (unsigned int)(- 5126.92089844f);
    v_17 = (unsigned int)((float)((int)((short)(p_6 + 77735264.f)) ^ (int)v_19) * - (
                          -881687872.f - (float)v_13));
    v_19 = (short)(v_23 - (long long)p_9);
  }
  while_0_break: ;
  if ((unsigned long)((! v_15 & (unsigned int)(~ result)) ^ (unsigned int)p_11) <= 
      ((unsigned long)v_17 - 425834570UL) + (unsigned long)(- (-93.f + p_6))) 
    result = (signed char)(- ((int)p[0] / ((int)((unsigned short)-5297099264.f) + 209) | 
                              (int)p_4 % ((int)((short)p_6) + 624)));
  else {
    v_13 = (unsigned long)(8 % (- v + 73));
    v = (int)((p_9 / 65457UL | (unsigned long)((double)p_11 * 188901105.551)) / (
              ((unsigned long)p_4 ^ ! v_13) + 962UL));
    result = (signed char)(- (! v));
  }
  return result;
}



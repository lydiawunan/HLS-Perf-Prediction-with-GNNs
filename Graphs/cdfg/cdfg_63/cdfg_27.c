#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 295185702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, float p_4[4][2][1], long p_7,
                   short p_11[3][5][2], unsigned long long p_13)
{
  unsigned short v_21;
  long v_19;
  long long v_17;
  unsigned short v_15;
  long v_9;
  long v;
  unsigned short result;
  v_21 = (unsigned short)59207;
  v_19 = (long)p_11[1][2][1];
  v_15 = (unsigned short)12701;
  v_9 = p_7;
  v = 98540996L;
  v_17 = (long long)((long)(-36 | (int)v_21) - (~ v_19 - (long)(-11952 * (int)((short)p_4[2][0][0]))));
  if ((long long)(- (p_4[0][1][0] / ((float)v_15 + 985.f)) - p_4[3][0][0]) <= 
      v_17 % (((long long)v_19 - v_17) + 850LL) - ((long long)(p_7 * -4886L) & (
                                                   19883LL - (long long)p_7))) 
    result = (unsigned short)((float)(! ((int)p % ((int)p + 1024))) + p_4[1][0][0]);
  else {
    v_9 = (long)((int)p_11[2][0][0] << ((p_13 * (unsigned long long)p_7 << (
                                         (v_9 - 65L) & 63L)) & 15ULL));
    v = (p_7 * -11137L - -60L / (v + 25L)) * (long)(((int)((signed char)-1.7953583333e+38f) | (int)p) >> (
                                                    v_9 & 31L));
    result = (unsigned short)(- (~ v + v));
  }
  return result;
}



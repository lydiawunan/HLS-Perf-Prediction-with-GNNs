#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 303057480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, char p_7, long long p_9,
                   unsigned long p_11, unsigned char p_15)
{
  long v_19;
  int v_17;
  unsigned short v_13;
  int v_5;
  unsigned long long v;
  unsigned short result;
  v_19 = -26047L;
  v_17 = (int)p_15;
  v_13 = (unsigned short)32446;
  v_5 = (int)p_9;
  v = 18446744073709502529ULL;
  result = (unsigned short)61677;
  while ((unsigned long)(- ((float)(v_5 - (int)result) - (float)p_15 * 405.981170654f)) != 
         (748239071UL - 3315570314UL % (unsigned long)((int)p_15 + 730)) * (
         ((unsigned long)p_7 - p_11) * ((unsigned long)v_17 + 3425252102UL))) {
    v_17 = (float)v_19 / -1.86046831613e+38f;
    result = (unsigned short)(! 4294962151U);
    v_13 = (unsigned short)((unsigned long)(~ ((int)p_15 >> ((int)v_13 & 7))) * (
                            ! p_11 ^ ~ p));
    v_5 = 1777701692;
  }
  while_0_break: ;
  if (v + (unsigned long long)((long long)(v_5 - (int)p_7) % ((p_9 - (long long)p_11) + 762LL)) != (unsigned long long)(
      (int)v_13 * (int)((unsigned short)1.58397137655e+38))) result = (unsigned short)(~ (
                                                             ! p * 4294967208UL));
  else result = (unsigned short)22875;
  return result;
}



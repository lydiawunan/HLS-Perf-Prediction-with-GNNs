#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 368266716
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned long long p_4, unsigned long long p_6, long p_11,
          long long p_13)
{
  unsigned char v_19;
  unsigned long v_17;
  double v_15;
  char v_9;
  unsigned short v;
  short result;
  v_19 = (unsigned char)212;
  v_17 = 59085UL;
  v_15 = (double)p_6;
  v_9 = (char)p_13;
  v = (unsigned short)4331;
  result = (short)p;
  while ((unsigned long long)((-106LL % (p_13 + 666LL)) * (long long)v_15 - (long long)v) <= 
         (unsigned long long)result + (((unsigned long long)result & p_4) + (unsigned long long)(
                                       345195659UL % (v_17 + 380UL)))) {
    v_9 = (int)v_19 + (int)((unsigned char)-790.562988281f);
    v_15 = (double)36287;
    v_19 = (unsigned char)((long)p - p_11);
    v_15 = (double)p_6 * v_15;
  }
  while_0_break: ;
  if (34147L >= (long)v_9) {
    result = (short)((70U | (unsigned int)v) | (unsigned int)v_9);
    result = (short)((p_4 - 80674549ULL) % (unsigned long long)((int)result + 318) + p_6);
    result = (short)(! (54 | ((int)result + (int)p)));
  }
  else result = (short)346040840.648;
  return result;
}



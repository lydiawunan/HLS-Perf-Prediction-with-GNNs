#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 389553600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, long p_4[2], unsigned int p_9,
          unsigned long long p_11[5][2][2], unsigned long long p_13)
{
  signed char v_19;
  unsigned long v_17;
  unsigned short v_15;
  double v_7;
  long v;
  float result;
  v_17 = 3403417797UL;
  v_15 = (unsigned short)p_11[4][0][1];
  v_7 = (double)p;
  v = (long)p_9;
  result = 510.409088135f;
  while (p_13 / (unsigned long long)((~ p_4[1] - (long)v_15 / 209405129L) + 682L) != (unsigned long long)(
         v % ((long)(- (- result)) + 460L))) {
    v_19 = v_17 | 230UL;
    v_17 = (unsigned long)(~ (-38349L + (long)((int)((signed char)-9610092544.f) % (
                                               (int)v_19 + 469))));
    v_15 = (unsigned short)0;
    v = (long)(- (- (result - (float)p_4[1])));
  }
  while_0_break: ;
  if ((unsigned long long)(- (- ((float)p_4[0] * result))) > ((unsigned long long)(
                                                              (double)v + 
                                                              v_7 / 115153303.) ^ ! (
                                                              (unsigned long long)p_9 + p_11[1][0][0]))) 
    result = (float)(- -5994075733.32);
  else result = (float)(~ p);
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173723884
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[3][2][2], char p_4, double p_6,
                       float p_11, unsigned long long p_15)
{
  unsigned long long v_17;
  signed char v_13;
  short v_9;
  unsigned char v;
  unsigned long long result;
  v_17 = 740482043ULL;
  v_13 = (signed char)(- ((p_6 - 854450339.) + (double)(- v_17)));
  if ((unsigned long long)p_11 <= (unsigned long long)v_13 / (p_15 + 606ULL)) 
    result = (unsigned long long)(! (! p[1][0][1] / (unsigned long)((int)p_4 + 916)));
  else {
    v = (unsigned char)(~ (~ (~ -1052600093LL)));
    v_9 = (short)(-660948630L);
    result = (unsigned long long)(p_6 * (double)((int)v / (((int)v + (int)v_9) + 53)));
  }
  return result;
}



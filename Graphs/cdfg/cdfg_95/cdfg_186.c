#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 515345101
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, long long p_4[2], signed char p_7, float p_9,
                 long long p_15)
{
  unsigned short v_17;
  char v_13;
  double v_11;
  char v;
  unsigned int result;
  v_17 = (unsigned short)p_15;
  v_13 = (char)p_4[0];
  v_11 = (double)p_4[1];
  v = (char)p;
  while (p_4[0] < (long long)(- (- (! v)))) {
    v_11 = (int)v_17 * (int)((unsigned short)-69.2032241821f);
    v_13 = (char)-119;
    v_17 = (unsigned short)(50041 / ((int)p + 912));
    v = (char)(33634.f + p);
  }
  while_0_break: ;
  if (v_11 == (double)(((int)v_13 * 17914 - -38) ^ (int)(((double)p_15 + v_11) + 1.84467440734e+19))) 
    result = 551957705U;
  else {
    result = 979582709U;
    v = (char)((float)((p_4[0] - (long long)p_9) - (long long)(4294932240U | (unsigned int)v)) + (
               - p_9 + (float)result));
    result = (unsigned int)(((long long)((unsigned int)p << (result & 31U)) / (
                             p_4[0] + 79LL)) % (long long)((int)(~ v) / (
                                                           (int)p_7 + 319) + 670));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 465583146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long p_5, short p_7[2][3], short p_9,
          char p_11)
{
  long long v_15;
  unsigned char v_13;
  float v;
  short result;
  v_13 = (unsigned char)249;
  v_15 = 3834156748LL;
  if ((long long)(((int)(- p_9) % ((int)p_11 % ((int)p_9 + 486) + 158)) * (int)v_13) <= 
      (long long)((unsigned int)(- p) ^ 1883312448U) / (- (-28165LL - v_15) + 565LL)) 
    result = (short)30566;
  else {
    v = (float)(p_5 / (unsigned long)((long)p_7[1][2] / ((974336281L + (long)p_7[0][0]) + 709L) + 771L));
    result = (short)(- (- ((float)p / (v + 973.f))));
    result = result;
  }
  return result;
}



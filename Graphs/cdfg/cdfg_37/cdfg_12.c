#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653420091
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned long p_5[5][3][2])
{
  short v_11;
  float v_9;
  unsigned char v_7;
  char v;
  int result;
  v_11 = (short)8875;
  v_9 = 846.018737793f;
  v_7 = (unsigned char)p;
  if ((float)(((long long)(p_5[2][2][0] - 40567UL) + 526150350LL) * (long long)(
              (int)((short)((float)v_7 * v_9)) + (int)v_11)) >= -1.69218060011e+38f) 
    v = (char)-5;
  else v = (char)-32;
  result = (int)((long long)((int)v + -57) % (~ p + 149LL) ^ 30777LL);
  return result;
}



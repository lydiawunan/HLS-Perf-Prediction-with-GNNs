#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543148621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, short p_5, long long p_7, unsigned int p_11,
        unsigned char p_13[4][5][5])
{
  long v_23;
  float v_21;
  float v_19;
  char v_17;
  double v_15;
  short v_9;
  int v;
  int result;
  v_23 = -29832L;
  v_21 = (float)p_7;
  v_17 = (char)-110;
  v_15 = (double)p_11;
  if ((long long)((long)v_15 - ! v_23 / (- v_23 + 438L)) != ~ p_7) {
    v_15 = (double)(~ ((int)(162.f * v_21) * -612262985));
    v_9 = (short)(- -459030749);
    v_19 = (float)p_13[3][0][0];
  }
  else {
    v_9 = (short)p_11;
    v_19 = (float)(- (4290883892UL & (unsigned long)(! v_9)));
    v_17 = (char)p;
  }
  if (~ ((int)((char)v_15) - (int)v_17) % (((int)(! p_5) >> 2UL) + 215) <= (int)v_19) 
    result = -2387;
  else {
    result = (int)((float)(! p_7) + -1.14729085192e+37f / ((float)(p * (long long)v_9) + 715.f));
    v = result;
    result = (int)((- p % (long long)((result - v) + 318)) % (long long)(
                   (((int)p_5 + 45) >> ((int)p_5 * (int)((short)7999813341.25) & 31)) + 555));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 236457024
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, short p_13, long long p_17, float p_19[3][3],
              short p_21)
{
  unsigned int v_23;
  float v_15;
  double v_10;
  unsigned long v_8;
  unsigned long v_6;
  char v_4;
  long long v;
  long long result;
  v_23 = 3376976623U;
  v_15 = (float)p_13;
  v_10 = 766356796.868;
  v_8 = 61102UL;
  v_4 = (char)p_19[2][0];
  v = (long long)p_13;
  result = p_17;
  if ((unsigned int)(1.84467440731e+19 * v_10 - (double)p_17) * ((4294967229U & v_23) - (unsigned int)(
                                                                 (int)((short)v_10) + (int)p_21)) <= (unsigned int)(! (
      (int)p_21 + (int)v_4 % ((int)p_21 + 814)))) {
    v_10 = (double)(- ((long long)p_19[1][1] + 685006398LL));
    result = ! (- p_17) - ((result - 89407973LL) & (long long)(~ p_13));
    v_8 = (unsigned long)result;
  }
  else {
    result = result;
    v_15 = (float)(((long long)v_23 & (p_17 + (long long)p_13)) + (long long)(
                                                                  21804 + (int)p_21) % 50845LL);
    v = (long long)p_21;
  }
  if (((152LL | result) - (long long)((int)p_13 - (int)((short)p))) * (long long)v_15 == 
      447968103LL * ! (p_17 * (long long)p_13)) {
    v_6 = (unsigned long)((long)(1.17095660799e+38 / (v_10 + 474.) + (double)p) ^ -15415L);
    v_4 = v_4;
    result = - ((v ^ (long long)v_4) + (long long)(v_6 - v_8));
  }
  else result = (long long)p_13;
  return result;
}



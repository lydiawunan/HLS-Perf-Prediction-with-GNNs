#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507710335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned short p_4, long p_7, long long p_11,
          unsigned short p_13)
{
  int v_21;
  double v_19;
  unsigned long v_17;
  float v_15;
  int v_9;
  float v;
  float result;
  v_21 = (int)p_11;
  v_19 = -4289744337.88;
  v_17 = (unsigned long)p_7;
  v_15 = 311.457214355f;
  v_9 = (int)p_11;
  v = -494.882171631f;
  result = (float)p_4;
  if ((unsigned long)(v_21 / (v_9 + 302)) <= v_17 + 3246409978UL) {
    v_17 = (unsigned long)(- v_15);
    v_21 = (int)v_19;
    v = (float)(! ((int)p / ((int)p + 618) - (int)(- p_13)));
  }
  else {
    v_19 = (double)(v + -4594141696.f);
    v_9 = -29058;
    v_21 = (int)(((float)p_7 / (result + 699.f)) * (float)(- p_11));
  }
  if (- (- (v_19 * (double)v)) > (double)v_21) result = (float)((int)p / (
                                                                (int)(! p) + 731));
  else {
    v = (float)((long long)((float)((int)p_13 * (int)p_4) * (v_15 * (float)v_17)) * 3026963819LL);
    v = - ((float)(p_7 + (long)v_9) + v * (float)p_11);
    result = (float)(((int)(~ p_4) - 17637 / ((int)((short)v) + 5)) % (
                     ! (59312 % ((int)p_4 + 156)) + 513));
  }
  return result;
}



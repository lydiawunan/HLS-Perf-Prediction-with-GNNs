#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373769021
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, short p_5, double p_7, long long p_11,
                  unsigned long p_17)
{
  float v_21;
  unsigned int v_19;
  long long v_15;
  unsigned long long v_13;
  signed char v_9;
  unsigned char v;
  unsigned char result;
  v_21 = (float)p_11;
  v_19 = 47090U;
  v_15 = -754474452LL;
  v_13 = (unsigned long long)p_17;
  v_9 = (signed char)44;
  result = (unsigned char)p_5;
  while ((unsigned long)(! v_19 / 10280U) * ((unsigned long)(- p_5) % 3661316162UL) > 4112770654UL) {
    v_15 = (int)v_21 % -9088;
    v_15 = 0LL;
    result = (unsigned char)23;
    v_19 = (unsigned int)25.3574733734f;
  }
  while_0_break: ;
  if (p_7 / (double)(((float)v_9 / (p + 905.f)) / ((float)p_11 + 832.f) + 821.f) > (double)(
      (((unsigned long long)result / (v_13 + 126ULL)) * (unsigned long long)v_15) % (unsigned long long)(
      612171513UL % ((p_17 >> (p_17 & 31UL)) + 727UL) + 616UL))) {
    v = (unsigned char)p;
    v = (unsigned char)(! ((int)((unsigned char)p) * (int)v) * (((int)p_5 | (int)p_5) * 88));
    result = v;
  }
  else result = (unsigned char)(- p);
  return result;
}



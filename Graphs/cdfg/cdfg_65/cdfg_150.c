#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749923144
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned long long p_7, long long p_11[1][5],
          int p_13[2][4], long p_15)
{
  unsigned long long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  unsigned int v_19;
  unsigned char v_17;
  float v_9;
  short v_4;
  unsigned short v;
  float result;
  v_25 = (unsigned long long)p_15;
  v_23 = (unsigned long long)p;
  v_21 = 27354UL;
  v_19 = 21101U;
  v_17 = (unsigned char)33;
  v_9 = -14.7525787354f;
  while (32053UL <= (unsigned long)v_19) {
    v_23 = v_25 & v_23 / (unsigned long long)(v_21 % 3945995114UL + 312UL);
    v_17 = (unsigned char)(- (! p_15));
    v_21 = (unsigned long)p_7;
    v_19 = (unsigned int)(- (-3.11404219927e+37 / (double)(- v_9 + 474.f)));
  }
  while_0_break: ;
  if ((unsigned long long)(~ ((long)(! p_13[0][3]) * (p_15 * -27L))) == 
      (p_7 - (unsigned long long)(! p_13[0][1])) % (unsigned long long)(
      (int)v_17 + 136)) {
    v_4 = (short)(4294967226UL % ((10500UL / (unsigned long)(p + 1003L)) * (unsigned long)(- v_9) + 395UL));
    v = (unsigned short)((long)(! (- v_4)) / (~ (p << (p_7 & 31ULL)) + 242L));
    result = (float)(~ ((int)v >> 8ULL));
  }
  else result = (float)((unsigned long long)p_11[0][1] - p_7);
  return result;
}



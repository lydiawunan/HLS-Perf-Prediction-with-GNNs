#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30161777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, char p_11[2], double p_13, unsigned int p_15,
                unsigned char p_17)
{
  long v_23;
  float v_21;
  unsigned char v_19;
  unsigned char v_9;
  char v_7;
  char v_5;
  unsigned int v;
  signed char result;
  v_23 = (long)p_11[1];
  v_21 = -3.23182713597e+38f;
  v_7 = (char)p_13;
  v = (unsigned int)p_13;
  v_19 = (unsigned char)(((-101.f * v_21) / ((float)(59940UL % (unsigned long)(
                                                     v_23 + 522L)) + 650.f)) * -51790.f);
  if ((int)p_17 + 250 <= ~ ((int)v_19 * (int)p_11[0] ^ (int)v_7)) {
    v_5 = (char)p;
    v = ! v;
    result = (signed char)((unsigned long)((v + (unsigned int)p) * (unsigned int)(~ v_5)) * 4033624362UL);
  }
  else {
    v_9 = (unsigned char)((27L / ((long)4702780707.71 / 49389L + 886L)) % (long)(
                          ! ((int)p_11[0] * (int)((char)p_13)) + 1017));
    v_7 = (char)((4294951127UL >> 27ULL) * (unsigned long)(! v_9));
    result = (signed char)v_7;
  }
  return result;
}



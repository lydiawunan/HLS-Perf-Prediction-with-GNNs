#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 910360926
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, char p_4, int p_6, signed char p_8,
                  short p_10)
{
  unsigned char v_21;
  short v_19;
  int v_17;
  double v_15;
  unsigned short v_13;
  short v;
  unsigned long result;
  v_21 = (unsigned char)249;
  v_19 = (short)-14830;
  v_17 = -7224;
  v_15 = 2.24973650171e+38;
  v_13 = (unsigned short)58506;
  v = (short)-16058;
  while (-1071063508L % (long)((int)(~ p) + 40) + -84L != (long)(- v_13)) {
    v_13 = (int)v_19 * (v_17 & (int)(v_15 + 8369192118.19));
    v_19 = p_10;
    v_17 = (int)(((unsigned int)((int)v_21 % ((int)p_8 + 80)) | 4294930402U) - (unsigned int)(
                 p_6 * ((int)p_8 * (int)v_13)));
    v_13 = (unsigned short)(- ((unsigned long)p_6 | 640518400UL));
  }
  while_0_break: ;
  if ((int)v < -3486) result = (unsigned long)p;
  else {
    result = (unsigned long)p_8;
    result = (unsigned long)(((int)p_4 - 42784) - 24) ^ 51355UL * ((unsigned long)p_6 * result);
  }
  return result;
}



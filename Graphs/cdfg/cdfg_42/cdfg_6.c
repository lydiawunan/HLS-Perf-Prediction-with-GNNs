#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470010489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p[3][5][2], unsigned char p_4,
                   unsigned long long p_6, unsigned int p_11,
                   unsigned int p_13)
{
  unsigned long v_21;
  int v_19;
  signed char v_17;
  unsigned long long v_15;
  long long v_9;
  long v;
  unsigned short result;
  v_21 = 42898544UL;
  v_19 = (int)p_4;
  v_17 = (signed char)p[0][0][1];
  v_15 = 473864252ULL;
  result = (unsigned short)28789;
  while (~ (! ((unsigned long long)p_11 & v_15)) < (unsigned long long)(
                                                   (int)((unsigned short)-301.025848389f) + 10135) % (
                                                   (18446744072838736768ULL ^ (unsigned long long)(
                                                    (unsigned long)v_17 * 4270912825UL)) + 629ULL)) {
    v_17 = (double)v_19 / -1.08888756906e+38;
    v_19 = (int)(! ((p_13 - 30U) - (unsigned int)v_17));
    v_17 = (signed char)158.856811523f;
    v_15 = (unsigned long long)((unsigned long)(- (- result)) * v_21);
  }
  while_0_break: ;
  if ((unsigned int)result == p_13) result = (unsigned short)p[2][1][1];
  else {
    v_9 = (long long)(18446744072721044566ULL * ((unsigned long long)(
                                                 55626UL % (p[1][2][0] + 902UL)) / (
                                                 - p_6 + 749ULL)));
    v = (long)((long long)(3864619628UL / (! p[0][2][0] + 676UL)) | - (! v_9));
    result = (unsigned short)((unsigned long long)(~ ((long)p_4 * -569784367L)) * ~ (
                              p_6 ^ (unsigned long long)v));
  }
  return result;
}



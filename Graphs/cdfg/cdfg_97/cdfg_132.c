#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 761591898
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[4][3][5], char p_11, double p_15[3],
                  unsigned short p_19)
{
  float v_17;
  unsigned short v_13;
  unsigned long v_8;
  short v_6;
  unsigned long v_4;
  short v;
  unsigned long result;
  v_17 = (float)p_15[2];
  v_13 = p_19;
  v_4 = (unsigned long)p_11;
  v = (short)p_15[1];
  if (15531UL > (unsigned long)(- ((int)v_13 - -36) * (int)(- p_15[1] + (double)(
                                                            v_17 - (float)p_19)))) {
    v_6 = (short)(- (- -76945.5967711));
    v_8 = (unsigned long)p_11 * v_4;
    v = (short)(((unsigned long)((int)v_6 / ((int)v_6 + 975)) * ((unsigned long)v * v_8)) / (
                (unsigned long)((float)((unsigned long)p[3][0][1] / (
                                        v_4 + 607UL)) * (-1.56532609466e+38f * (float)v_8)) + 484UL));
  }
  else {
    v_4 = (unsigned long)(- (! (short)13711));
    v = (short)2563;
  }
  result = (unsigned long)v % (v_4 + 148UL);
  return result;
}



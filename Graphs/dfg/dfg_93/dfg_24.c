#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 595263631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, signed char p_9, short p_11, int p_13[4][2][3],
         unsigned long p_17)
{
  unsigned int v_23;
  unsigned short v_21;
  unsigned long v_19;
  short v_15;
  unsigned char v_6;
  unsigned short v_4;
  long v;
  long result;
  v_23 = (unsigned int)p;
  v_21 = (unsigned short)p_9;
  v_19 = (unsigned long)p_11;
  v_15 = (short)p_13[1][1][1];
  v_6 = (unsigned char)70;
  v_4 = (unsigned short)p;
  v = (long)(- (((v_19 * (unsigned long)p) % (unsigned long)(((int)p | (int)v_21) + 1016)) / (
                (unsigned long)(~ v_23) * 4271506320UL + 181UL)));
  v_4 = (unsigned short)(((int)(~ (- p)) - (int)p) >> ((! p_13[3][1][1] & (
                                                        (int)v_4 ^ (int)v_4 * (int)((unsigned short)-2214234624.f))) & 31));
  v = (long)((unsigned long)((((int)v_4 / ((int)v_6 + 283)) / ((int)p + 1014)) * (int)(
                             -63218.5639823 - (double)((long)2.9349780926e+38 + v))) ^ (
             (unsigned long)(((int)p_9 - (int)p_11) / (! p_13[0][0][1] + 370)) - (
             (unsigned long)(! v_15) + - p_17)));
  result = v;
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803139626
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned long p_5, short p_7, double p_23,
         unsigned short p_25)
{
  long long v_21;
  unsigned int v_19;
  short v_17;
  double v_15;
  char v_13;
  float v_11;
  char v_9;
  unsigned long v;
  long result;
  v_19 = (unsigned int)p_5;
  v_17 = (short)22230;
  v_15 = p_23;
  v_13 = (char)p_25;
  v_9 = (char)p_25;
  v = (unsigned long)p_7;
  v_21 = (-2052LL * (long long)(v / (unsigned long)(4294967185U / (v_19 + 800U) + 491U))) / 51191LL;
  v_11 = (float)((long long)((int)(-2.70995789548e+38 * ((double)v_13 * v_15)) | (
                             (int)v_17 >> ((p_5 >> 11U) & 15UL))) + (
                 ! ((long long)v_19 * v_21) + (long long)(((int)((unsigned short)p_23) % (
                                                           (int)p_25 + 72)) * -167560784)));
  v = (unsigned long)((long long)((long)((int)(- p_7) - (int)v_9) - ! (
                                  874712256L % (long)((int)p_7 + 702))) + ~ (
                      ((long long)v_11 + -941365721LL) - -873LL));
  result = (long)(10389ULL % (((18446744073184654917ULL + (unsigned long long)v) + (unsigned long long)(
                               (unsigned int)p / 4065909342U)) + 421ULL) + (unsigned long long)(- (
                  -8.23073108118e+37 / ((double)(p_5 / ((unsigned long)-400.237731934f + 267UL)) + 858.))));
  return result;
}



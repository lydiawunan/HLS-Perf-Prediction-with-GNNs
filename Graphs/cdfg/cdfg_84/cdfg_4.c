#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 354417176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, short p_5, float p_7, unsigned long long p_9,
           int p_17)
{
  short v_31;
  unsigned char v_29;
  char v_27;
  double v_25;
  int v_23;
  int v_21;
  char v_19;
  unsigned long long v_15;
  double v_13;
  long v_11;
  short v;
  double result;
  v_31 = (short)6890;
  v_29 = (unsigned char)p_7;
  v_27 = (char)p_7;
  v_25 = (double)p_7;
  v_23 = -64244;
  v_21 = p_17;
  v_19 = (char)9;
  v_13 = (double)p_17;
  result = (double)p;
  if ((double)(p_7 - p_7) + (double)((int)result * -849177331) / (v_25 + 406.) != 
      (double)(p_9 << (((unsigned int)v_27 & p) & 63U)) - (((double)v_29 - v_13) - (double)(
                                                           (int)p_5 - (int)v_31))) {
    v_11 = 0L;
    v = (short)v_19;
    result = (double)((unsigned int)(~ (- p_5)) | ! ((unsigned int)p_17 / (
                                                     p + 198U)));
  }
  else {
    v_11 = (long)(v_21 - (p_17 & v_23) / ((int)(- p_5) + 152));
    result = (double)p;
    v = (short)(((float)p_17 / (p_7 + 741.f)) * -977.874267578f);
  }
  while ((unsigned long long)((96U % (p + 291U)) % ((unsigned int)v % (
                                                    p + 477U) + 549U) - (unsigned int)(! (
                              (int)p_5 - (int)((short)result)))) != (
         (unsigned long long)(- ((float)p - p_7)) & p_9)) {
    v_13 = v_11 << 16U;
    result = (double)(unsigned char)187;
    v_15 = (unsigned long long)((20060784. - v_13) / 4081776086.);
    v = (short)((float)(! (v_15 - 929ULL)) - ((728.909057617f - (float)v_15) - 192.f));
  }
  while_0_break: ;
  return result;
}



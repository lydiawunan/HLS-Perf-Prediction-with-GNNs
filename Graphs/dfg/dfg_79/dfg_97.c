#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 121144881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, double p_4[1], signed char p_6,
                  unsigned short p_8, unsigned long p_13)
{
  char v_21;
  unsigned long long v_19;
  unsigned char v_17;
  unsigned long v_15;
  unsigned short v_11;
  int v;
  unsigned char result;
  v_19 = (unsigned long long)p_4[0];
  v_17 = (unsigned char)p;
  v_11 = (unsigned short)29464;
  v_21 = (char)p_6;
  v_15 = (unsigned long)(! 0);
  v = (int)((unsigned long long)((p_13 / (v_15 + 674UL)) * (unsigned long)(
                                 -27 + (int)((signed char)136.528915405f)) & (unsigned long)(~ (
                                 (int)p_6 / ((int)v_17 + 622)))) / (- (
                                                                    v_19 + 986449677ULL) % (
                                                                    (unsigned long long)p_4[0] + 884ULL) + 158ULL));
  result = (unsigned char)(((int)(- p) & (int)((signed char)p_4[0]) * (int)p_6) * (int)p_8 - (
                           - (! v) ^ (int)v_11));
  return result;
}



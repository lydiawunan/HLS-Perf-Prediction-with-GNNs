#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1070194067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned char p_5[1][2][4],
                   long long p_7, double p_9, long long p_13)
{
  short v_19;
  long v_17;
  float v_15;
  short v_11;
  unsigned char v;
  unsigned short result;
  v_19 = (short)p_7;
  v_17 = (long)p_9;
  v_11 = (short)p;
  v = (unsigned char)p_7;
  result = (unsigned short)p;
  v_15 = (float)(- (! (656117297L - (long)((int)((unsigned char)-747.897583008f) / (
                                           (int)v + 736)))));
  result = (unsigned short)((long long)(- v_15) / ((long long)result * (
                                                   35097LL - (long long)v_17) + 892LL) - (long long)(
                            ((unsigned long)(~ v_19) - 3320356393UL) - (unsigned long)(
                            (double)((int)((unsigned char)p_9) + (int)p) + p_9)));
  v = (unsigned char)(((long long)(~ ((int)result * (int)p_5[0][1][0])) % (
                       (-13LL % (p_7 + 453LL)) / (long long)(((int)((short)p_9) - (int)v_11) + 372) + 126LL)) % (
                      p_13 + 267LL));
  result = (unsigned short)((int)result * ((int)v + (int)(~ p)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 19356510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, signed char p_5, unsigned long p_9,
                   signed char p_11)
{
  double v_19;
  char v_17;
  long v_15;
  unsigned long long v_13;
  signed char v_7;
  short v;
  unsigned short result;
  v_19 = 407.147723954;
  v_17 = (char)12;
  v_15 = (long)p_11;
  v_13 = (unsigned long long)p_11;
  v = p;
  result = (unsigned short)(~ (! ((31519 - (int)v_17) - (int)(v_19 - (double)v_13))));
  v_7 = (signed char)(- (4294960100UL / (unsigned long)((int)(! (~ v)) + 647)));
  v_7 = (signed char)(((v_13 / (unsigned long long)(v_15 + 33L)) % (unsigned long long)(
                       -53315LL * (long long)p_9 + 993LL)) * (unsigned long long)(
                      (int)(- result) / ((int)v_7 % ((int)v + 311) + 11)) & (unsigned long long)(! p_9));
  result = (unsigned short)(-1125880765LL % (long long)(((unsigned long)(
                                                         (int)p * (int)v >> (
                                                         1100UL % (unsigned long)(
                                                         (int)p_5 + 620) & 31UL)) | 
                                                         (unsigned long)(! v_7) % (
                                                         p_9 % (unsigned long)(
                                                         (int)p_11 + 879) + 906UL)) + 245UL));
  return result;
}



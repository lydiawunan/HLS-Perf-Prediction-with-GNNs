#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1010670434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, long long p_5[2], long p_9, long p_13,
                   unsigned short p_15)
{
  long long v_23;
  int v_21;
  float v_19;
  long v_17;
  short v_11;
  int v_7;
  long v;
  unsigned short result;
  v_23 = (long long)p_9;
  v_21 = (int)p_15;
  v_17 = -17091L;
  v_7 = 1048171662;
  result = (unsigned short)5664;
  v_19 = (float)(- (p_9 - - p_9) - p_13);
  v_11 = (short)(0ULL % (unsigned long long)((int)result + 309) ^ (unsigned long long)(
                 (long long)v_19 - (748LL ^ ((long long)v_21 - v_23))));
  v = ~ ((long)v_7 % (p_9 + 65L) ^ (long)v_11) % (((! p_13 - (long)p_15) + - (- p_13)) + 182L);
  result = (unsigned short)((long long)((v * (long)p + -48905L) - (long)(- (
                                        3823318016.f + (float)p))) & p_5[1]);
  return result;
}



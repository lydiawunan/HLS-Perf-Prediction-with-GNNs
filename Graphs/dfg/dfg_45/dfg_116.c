#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 184502525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, signed char p_4[1][1][3], char p_6, float p_9,
              long long p_15)
{
  unsigned short v_13;
  long v_11;
  short v;
  long long result;
  v_13 = (unsigned short)p;
  v_11 = 28232L;
  v = (short)(- ((long long)((int)(- v_13) >> 2UL) ^ (3599374166LL % (
                                                      p_15 + 83LL) | (long long)(- p_4[0][0][2]))));
  result = (long long)((long)(- ((float)(! v) * (3677613312.f - p_9))) >> (
                       v_11 & 31L));
  result = ~ ((4427LL % (result + 875LL) - (long long)p) + (64809LL / (long long)(
                                                            (int)p_4[0][0][2] + 446) + (long long)(! p_6)));
  result = result;
  return result;
}



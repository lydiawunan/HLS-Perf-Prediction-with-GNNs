#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947217191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, signed char p_4, short p_11,
                  signed char p_15)
{
  unsigned char v_17;
  int v_13;
  float v_9;
  unsigned short v_7;
  int v;
  unsigned long result;
  v_17 = (unsigned char)p_4;
  v_13 = -802511728;
  v = 43219;
  result = (unsigned long)p_11;
  v_7 = (unsigned short)p_4;
  v_9 = (float)((unsigned long long)(- (v / (v_13 + 753)) | ((int)(! p_4) - 5970174)) + (
                ~ (18446744073074959512ULL | (unsigned long long)p_15) & (unsigned long long)(
                ((int)v_17 - (int)p_15) + 51144)));
  result = (unsigned long)(- (-12806LL / (long long)((int)p_4 + 66)) % (long long)(
                           (v + 13 / ((int)p_4 + 761)) + 215) | (long long)(
                           (unsigned long)((v + (int)v_7) * (int)(- v_9)) / (
                           ((unsigned long)p_11 - ! result) + 560UL)));
  result = (unsigned long)((unsigned long long)(4294967252UL - result) % (
                           p + 188ULL));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543468313
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned int p_13[4], unsigned short p_15,
                 char p_19, signed char p_21)
{
  unsigned long long v_17;
  unsigned char v_11;
  unsigned long long v_9;
  double v_7;
  signed char v_4;
  float v;
  unsigned int result;
  v_17 = (unsigned long long)p_19;
  v_11 = (unsigned char)31;
  v = -6917283328.f;
  result = p_13[3];
  v_7 = (double)(((v_17 * (unsigned long long)result) * (unsigned long long)(
                  (int)p_19 << ((int)p_21 & 7))) % (unsigned long long)(
                 (int)(! p_21) + 963) + (unsigned long long)((int)p_15 | -15874));
  v_9 = 18446744073249912550ULL;
  v_4 = (signed char)(~ (- (v_9 % (unsigned long long)((int)v_11 + 757))) - (unsigned long long)(- (
                      (p_13[0] - (unsigned int)p_15) * p_13[1])));
  result = (unsigned int)((((int)(-3094161408.f / (v + 385.f)) + (int)v_4 / -4057) & (int)p) * (int)(- (
                          - v_7 - - v_7)));
  return result;
}



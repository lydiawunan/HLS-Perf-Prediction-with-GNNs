#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 275107154
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[3][2][4], int p_7, unsigned long long p_9,
                 unsigned char p_11, short p_13[1])
{
  short v_21;
  signed char v_19;
  unsigned long v_17;
  unsigned long v_15;
  float v_4;
  unsigned long long v;
  unsigned int result;
  v_21 = (short)p[2][1][3];
  v_19 = (signed char)87;
  v_17 = 19065UL;
  v_15 = 942582923UL;
  v_4 = (float)(~ (~ (p_9 * (unsigned long long)v_21) * (unsigned long long)(- (
                   (int)v_21 - (int)p_11))));
  v = (unsigned long long)(~ (((unsigned long)((int)p_11 * (int)v_19) | (
                               v_17 << 16)) / 4294948132UL));
  result = (unsigned int)((unsigned long)(- (v_4 + -114.f) + (float)(
                                          (unsigned long long)((int)p[0][1][1] >> (
                                                               p_7 & 7)) % (
                                          ! p_9 + 327ULL))) % (((unsigned long)(
                                                                ((int)p_11 + (int)((unsigned char)-6.04199037935e+37)) - (int)p_13[0]) - 
                                                                (v_15 + v_17) / (unsigned long)(
                                                                (int)p_11 + 75)) + 958UL));
  result = (unsigned int)(! (v | (unsigned long long)(! result)));
  return result;
}



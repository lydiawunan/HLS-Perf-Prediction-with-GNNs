#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470689285
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, float p_7, unsigned short p_11,
                  unsigned short p_17)
{
  short v_25;
  char v_23;
  char v_21;
  float v_19;
  double v_15;
  unsigned short v_13;
  long v_9;
  long long v_5;
  signed char v;
  unsigned long result;
  v_23 = (char)30;
  v_21 = (char)p_11;
  v_15 = (double)p_11;
  v_13 = (unsigned short)64262;
  v_9 = -325745498L;
  v_5 = -848893113LL;
  v = (signed char)125;
  result = (unsigned long)p_11;
  v_25 = (short)((-14610LL & (v_5 << 23UL) / (long long)(((int)p_17 - (int)p_11) + 585)) - (long long)(
                 (double)v + - (3.22879645607e+38 + (double)p_7)));
  v_19 = (float)(((unsigned long)v_23 & (result ^ (unsigned long)(51L % (
                                                                  v_9 + 997L)))) % (unsigned long)(
                 ((int)v_25 % ((int)((short)p_7) + 831) + (int)(v_15 / 1108.90842216)) * (
                 ((int)p_17 + (int)v_13) % 43) + 593));
  v = (signed char)((float)((long long)((int)(! p_11) - (int)v_13 / (
                                                        (int)((unsigned short)v_15) + 311)) * (
                            -915353859LL & (long long)(p * 4294967249U))) + 
                    (float)(- (~ p_17)) / (- (v_19 / ((float)v_21 + 341.f)) + 199.f));
  result = (unsigned long)((long long)(778.208578392 * (double)(4294964163UL - (unsigned long)p)) / (
                           (((long long)v - v_5) + (long long)(4294908571U % (
                                                               (unsigned int)p_7 + 395U))) * (long long)(~ v_9) + 199LL));
  return result;
}



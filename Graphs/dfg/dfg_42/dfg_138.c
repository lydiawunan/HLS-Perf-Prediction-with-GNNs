#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016176569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned short p_13)
{
  int v_17;
  unsigned char v_15;
  unsigned long v_11;
  short v_9;
  short v_7;
  float v_5;
  long long v;
  unsigned long result;
  v_17 = (int)p_13;
  v_11 = 3353698611UL;
  v_9 = (short)p;
  v_7 = (short)p_13;
  v = (long long)p_13;
  v_15 = (unsigned char)(43535UL & ((unsigned long)3.80943310103e+37 * (
                                    4294918659UL * (unsigned long)v_9)) / (
                                   (unsigned long)(0.f - ((float)v_17 + p)) + 178UL));
  v_5 = (float)((long long)(- ((int)v_9 * 116)) % ((long long)(- p_13) * (
                                                   v + (long long)v_15) + 458LL) - (long long)(- (
                ((float)v_7 + p) + 0.f)));
  v_7 = (short)((unsigned long long)(~ ((unsigned int)p_13 & 361123927U)) % 58317ULL);
  result = (unsigned long)(- p - (float)((v + 104LL) - (long long)(- v_5))) + (
           (unsigned long)((int)v_7 / ((int)v_9 + 527)) % (~ v_11 + 656UL) - (unsigned long)p_13);
  return result;
}



//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 860647343
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, long p_4[4][2], int p_7, unsigned char p_9,
         unsigned long long p_11)
{
  signed char v_21;
  long v_19;
  unsigned char v_17;
  float v_15;
  signed char v_13;
  float v;
  long result;
  v_21 = (signed char)p;
  v_19 = p_4[3][0];
  v_15 = (float)p_7;
  v_13 = (signed char)p;
  v_17 = (unsigned char)(! (- (p_11 - (unsigned long long)p_7)) % (unsigned long long)(
                         (unsigned long)(~ v_19) / ((unsigned long)v_21 / 8908UL + 892UL) + 364UL));
  v = - (v_15 * (float)(- p_4[1][0])) * (float)(~ (- (! v_17)));
  result = (long)((((unsigned long long)(p_7 * (int)p_9) - ((unsigned long long)p_9 | p_11)) * (unsigned long long)(
                   ((int)v_13 & 59569) * -9912)) % 4170589359ULL);
  result = (long)((float)(- result) + (float)((long)p % ((long)p * p_4[1][1] + 599L)) / (
                                      v + 104.f));
  return result;
}



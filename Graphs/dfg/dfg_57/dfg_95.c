#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 165774780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, char p_5, double p_11, unsigned short p_13,
                       long p_19[3][4])
{
  long v_17;
  unsigned long v_15;
  long long v_9;
  unsigned short v_7;
  short v;
  unsigned long long result;
  v_17 = (long)p_13;
  v_15 = (unsigned long)p_19[0][0];
  v_7 = (unsigned short)((unsigned long long)(~ (-34913LL | (long long)(
                                                 (unsigned long)p_13 - v_15))) + 
                         ((unsigned long long)(~ v_17) * 18446743864127100349ULL) % (unsigned long long)(
                         p_19[1][2] % (long)(-44936 / ((int)p_5 + 631) + 289) + 528L));
  v_9 = (long long)(- p_11);
  v = (short)(- (- (((long long)v_7 & v_9) % ((long long)(- p_11) + 115LL))));
  result = (unsigned long long)(! ((unsigned long)((float)(26400UL * (unsigned long)v) / (
                                                   p / 1104.f + 369.f)) * ! (
                                   (unsigned long)p_5 + 4294940908UL)));
  return result;
}



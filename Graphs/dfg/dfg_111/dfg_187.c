#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 34345561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned long p_5, unsigned char p_9, unsigned long p_11,
         unsigned long p_13)
{
  unsigned long long v_21;
  unsigned long v_19;
  short v_17;
  short v_15;
  unsigned char v_7;
  long v;
  long result;
  v_19 = (unsigned long)p_9;
  v_15 = (short)27340;
  v_7 = (unsigned char)210;
  result = (long)p;
  v_21 = (unsigned long long)(~ p_5);
  v_17 = (short)((unsigned long long)(~ ((p_5 - (unsigned long)result) ^ (unsigned long)result)) / (
                 ! (((unsigned long long)v_19 % (v_21 + 807ULL)) / (unsigned long long)(
                    39UL * p_11 + 26UL)) + 995ULL));
  v = (long)(((p_11 - p_13) % (unsigned long)((int)v_15 + 664)) % (((unsigned long)(! v_17) ^ 
                                                                    p_13 / 55UL) + 134UL) & (
             (unsigned long)result ^ p_5));
  result = (long)((unsigned long)(~ ((long)p & ! v)));
  return result;
}



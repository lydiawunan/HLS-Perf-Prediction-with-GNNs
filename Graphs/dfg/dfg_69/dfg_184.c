#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 88404400
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, signed char p_9, double p_11, short p_19)
{
  long long v_17;
  short v_15;
  char v_13;
  unsigned char v_7;
  unsigned int v_4;
  long v;
  long long result;
  v_17 = -340593570LL;
  v_15 = (short)16292;
  v_13 = (char)p_11;
  v_4 = 3922228815U;
  v = -57010573L;
  result = (long long)((unsigned long long)(1 & (unsigned long)(! ((int)p_19 % 61886))) - (
                       18446744073709497238ULL - - ((unsigned long long)v_13 / 18446744073605595125ULL)));
  v_13 = (char)p_9;
  v_7 = (unsigned char)((long long)(- (p_11 / 24602.) - (double)(((int)p_9 & (int)v_13) % (
                                                                 (936355623 + (int)v_15) + 556))) & 
                        ((long long)(-32196 / ((int)((short)-443402944.f) + 249)) & v_17) / -11777LL);
  result += (long long)(((unsigned long)v * (unsigned long)v_4 + (unsigned long)(
                         411606980L - (long)p)) ^ (unsigned long)(((int)v_7 << (
                                                                   (int)p_9 & 7)) % (
                                                                  (int)p_9 % 26454 + 873)));
  return result;
}



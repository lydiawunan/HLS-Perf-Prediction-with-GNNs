#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221213318
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned long p_5)
{
  unsigned int v_15;
  float v_13;
  int v_11;
  long v_9;
  unsigned short v_7;
  short v;
  long long result;
  v_15 = (unsigned int)p;
  v_13 = -425.297973633f;
  v_11 = (int)p;
  result = 973312650LL;
  v_9 = (long)(~ (signed char)-76);
  v_7 = (unsigned short)((unsigned long)(- (~ v_9 - 1045201552L)) - (
                                                                    (unsigned long)(
                                                                    v_11 - (int)v_13) + 
                                                                    54UL / (
                                                                    p_5 + 456UL)) / (unsigned long)(
                                                                    (
                                                                    - v_15 - 4294967259U) + 413U));
  v = (short)((result + (- result ^ (long long)(- v_7))) >> 18);
  result = ~ (((long long)(~ v) / (p % 85LL + 590LL)) % (((long long)p_5 % (
                                                          result + 520LL)) * (
                                                         result * -5378339840LL) + 926LL));
  return result;
}



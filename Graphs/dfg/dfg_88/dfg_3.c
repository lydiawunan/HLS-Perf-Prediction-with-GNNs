#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 26970290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, float p_15)
{
  unsigned int v_17;
  int v_13;
  long v_11;
  int v_9;
  unsigned short v_7;
  char v_5;
  float v;
  unsigned long long result;
  v_17 = 4294945898U;
  v_13 = -534408561;
  v_11 = (long)p;
  v_7 = (unsigned short)p;
  v_5 = (char)-73;
  v = (float)p;
  v_7 = (unsigned short)((unsigned long)((long)v_5 / (-3035L * v_11 + 486L)) & (unsigned long)(
                         (unsigned int)((double)((float)v_11 + v) * 328.283532289) % (
                         ((unsigned int)(v_13 % ((int)p_15 + 94)) & (unsigned int)v_7 % (
                                                                    v_17 + 904U)) + 768U)));
  v_9 = (int)v_5;
  v = (float)((long long)v_5 % (- (p | p) + 106LL));
  result = (unsigned long long)(((int)(- (v + (float)p)) / (((int)(~ v_5) << (
                                                             p % -17778LL & 7LL)) + 614)) / (
                                ~ ((int)(~ v_7) - v_9) + 956));
  return result;
}



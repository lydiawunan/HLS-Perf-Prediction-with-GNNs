#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 980542387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned short p_5, short p_9[4], long long p_11)
{
  unsigned int v_7;
  signed char v;
  unsigned int result;
  v_7 = 4294962279U;
  result = (unsigned int)((long long)(- p % ((int)p_5 % (p + 546) + 728)) / (
                          ((long long)((unsigned int)p_5 + (v_7 + (unsigned int)p_9[0])) | ! (
                           p_11 / -26052LL)) + 613LL));
  v = (signed char)p;
  result = (unsigned int)(3265242572UL * (unsigned long)(- result));
  result = (unsigned int)p / (! result % ((~ result + (unsigned int)v % (
                                                      result + 899U)) + 609U) + 708U);
  return result;
}



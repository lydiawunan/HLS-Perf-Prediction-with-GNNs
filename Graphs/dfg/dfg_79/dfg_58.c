#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965608988
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_11, short p_13, short p_15)
{
  unsigned long v_9;
  float v_7;
  unsigned long long v_5;
  char v;
  unsigned long result;
  v_9 = 4294958026UL;
  v_7 = (float)p;
  v_5 = (unsigned long long)p;
  v = (char)60;
  result = (unsigned long)((unsigned long long)((float)(p_11 / (((int)p_13 | (int)p_15) + 155)) * (
                                                (v_7 - v_7) + 26.f)) + (
                           18446744073709547957ULL - 18446744073709500983ULL % (unsigned long long)(
                                                     ! p_11 + 211)));
  v_7 = (float)(0UL % (unsigned long)(((unsigned int)v - p) + 749U));
  v = (char)v_7;
  result = (unsigned long)((63268ULL - (unsigned long long)(~ (! v))) << (
                           ((unsigned long long)((47UL + result) * (unsigned long)p) - 
                            (unsigned long long)((int)((char)-6.35380136958e+36f) % -13) * (
                            (unsigned long long)v + v_5)) & 63ULL));
  return result;
}



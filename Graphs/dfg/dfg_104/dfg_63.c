#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992018077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned long long p_11, unsigned long p_13)
{
  double v_15;
  float v_9;
  unsigned int v_7;
  unsigned char v_4;
  long v;
  unsigned long result;
  v_15 = 416.032540419;
  v_9 = 3.0039603488e+38f;
  v_7 = 50955U;
  result = (unsigned long)p;
  v = (long)(- p_11 + 18446744073709521044ULL);
  v = (long)((((unsigned long long)((unsigned long)v_9 * 459388791UL) ^ ! p_11) * (unsigned long long)(
              - p_13 / ((unsigned long)v / (p_13 + 217UL) + 109UL))) / (unsigned long long)(
             ! (! result + (unsigned long)(v % ((long)v_15 + 69L))) + 839UL));
  v_4 = (unsigned char)(0U - v_7);
  result = (unsigned long)(! (~ ((long long)(v % (long)((int)v_4 + 245)) | ! p)));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 787588562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, short p_11, int p_13, double p_19[2])
{
  double v_21;
  unsigned long v_17;
  double v_15;
  unsigned int v_9;
  unsigned short v_7;
  signed char v_5;
  char v;
  unsigned int result;
  v_21 = p;
  v_17 = 33490UL;
  v_15 = (double)p_13;
  v_9 = 5414899U;
  v_7 = (unsigned short)41095;
  v = (char)((p / (v_21 / 281. + 695.)) / (p_19[1] + 308.));
  if ((double)(~ ((p_13 / ((int)2.97567016055e+38 + 634)) % ((int)(- v_15) + 625))) >= 
      - (-110.634762933 * (double)v_17) - (p_19[1] / (p + 63.)) * (double)(- v_7)) {
    v_7 = (unsigned short)((p - p) - (double)((int)v_7 % 348) / ((p + (double)v_9) + 6.));
    v_5 = (signed char)(- ((int)-6606307629.65 % (((int)v_7 + (int)v) + 756)));
    result = (unsigned int)((- p - 4294915766.) - (double)((unsigned long long)v & (
                                                           26043ULL - (unsigned long long)v_5)));
  }
  else result = (unsigned int)(- ((int)(- p_11)));
  return result;
}



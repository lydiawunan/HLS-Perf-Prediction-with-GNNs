//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160284067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, double p_9, long long p_11,
                  unsigned short p_15)
{
  unsigned short v_13;
  unsigned char v_6;
  unsigned long v_4;
  unsigned long long v;
  unsigned long result;
  v_13 = (unsigned short)p;
  v_6 = (unsigned char)43;
  v_4 = (unsigned long)(p_11 + (long long)(~ ((int)v_13 * (int)p_15)));
  v = (unsigned long long)p_9;
  v_4 = (unsigned long)(((10810ULL - v) << ((p - (long long)v_4) & 63LL)) / 39773ULL - (unsigned long long)2.24751851825e+38);
  result = (unsigned long)((~ (! v) ^ (unsigned long long)v_4) % (unsigned long long)(
                           (int)v_6 + 439));
  return result;
}



//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 71262150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, long p_9, unsigned long p_15)
{
  short v_13;
  unsigned short v_11;
  long long v_6;
  float v_4;
  unsigned long long v;
  unsigned long result;
  v_13 = (short)p;
  v_6 = (long long)p_15;
  v_11 = (unsigned short)p_15;
  v = (unsigned long long)v_13;
  v_4 = (float)(-664958557LL * (long long)p >> ((int)v_11 & 63));
  result = (unsigned long)((long long)(2.70945473814e+38 / ((double)(
                                                            ~ v / ((unsigned long long)(- v_4) + 982ULL)) + 874.)) * (
                           (! v_6 + (long long)p % (v_6 + 238LL)) + (long long)p_9));
  return result;
}



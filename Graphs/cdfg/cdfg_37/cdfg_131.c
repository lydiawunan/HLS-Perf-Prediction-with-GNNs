#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17654415
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned char p_4, unsigned long p_6, long p_8,
              char p_10)
{
  int v_19;
  unsigned short v_17;
  long long v_15;
  signed char v_13;
  unsigned int v;
  long long result;
  v_19 = (int)p_8;
  v = (unsigned int)p_4;
  result = (long long)p;
  if ((unsigned long)((-74958090 % (v_19 + 914)) / ((int)(! p_4) + 338)) == ! (
      p_6 - ~ p_6)) {
    v_13 = (signed char)(-19225);
    v = (unsigned int)((int)-7.33497115532e+37);
    result = (long long)(-52743);
  }
  else {
    v_17 = (unsigned short)(result % (long long)((int)p_10 + 810));
    v_15 = (long long)((unsigned long)(-12L % (((long)v_17 ^ p) + 710L)) + p_6);
    result = (long long)p_4 % (-111LL % (v_15 + 626LL) + 954LL);
  }
  if ((long long)((61UL ^ p_6) / (unsigned long)(- p_8 + 409L)) / ((long long)(
                                                                   (int)p_10 % (
                                                                   (int)((char)3029686512.25) + 64)) * (
                                                                   result - (long long)v) + 536LL) >= 0LL) {
    result = (long long)(! (! (! p)));
    result = result;
  }
  else result = (long long)p_4;
  return result;
}



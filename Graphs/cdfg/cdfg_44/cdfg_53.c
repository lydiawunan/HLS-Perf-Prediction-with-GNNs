#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 512515009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p[2][1], long long p_11, unsigned short p_15)
{
  long v_17;
  unsigned short v_13;
  long long v_8;
  short v_6;
  unsigned int v_4;
  short v;
  long result;
  v_17 = 206974120L;
  v_13 = (unsigned short)25952;
  v_8 = p_11;
  v_6 = (short)p[0][0];
  v_4 = (unsigned int)p[0][0];
  v = (short)15864;
  result = -59673L;
  if ((long long)v_17 % (((p_11 - (long long)v_6) - (long long)(result % -15920L)) + 475LL) == 
      ~ (~ v_8) % -24210623LL) {
    result = (long)(- ((long long)v_6 - p_11) - (long long)(66 - (int)(~ v_13)));
    v_8 = ((long long)((int)v_6 / ((int)p[1][0] + 197)) + v_8) << ((611476757ULL - (
                                                                    18446744073340937526ULL ^ (unsigned long long)p[0][0])) & 63ULL);
    v_8 = (long long)(! (18446731819860707137ULL & (unsigned long long)(
                         v_8 + 15249LL)));
  }
  else {
    v = (short)((long)p_15 - - (45L * v_17));
    v_6 = (short)(- (! (unsigned char)144));
    v_8 = (long long)((int)p[1][0]);
  }
  result = (long)((long long)(result * (long)v - -48L) * ((long long)(
                                                          v_4 - (unsigned int)v_6) - 
                                                          -72LL % (v_8 + 797LL)));
  return result;
}



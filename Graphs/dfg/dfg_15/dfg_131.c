#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 116981419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p[3], char p_11, unsigned long p_15,
                unsigned long p_17, signed char p_19)
{
  long v_13;
  long v_8;
  signed char v_6;
  short v_4;
  unsigned long long v;
  signed char result;
  v_13 = 314383344L;
  v_8 = (long)p_11;
  v_4 = (short)p_15;
  result = p_19;
  v_6 = (signed char)((float)(- ((v_13 << (p_15 & 31UL)) << ((17 << (
                                                              p_17 & 7UL)) & 31))) + (
                      5957953024.f - (float)((int)result / ((int)p_19 + 587) & -19)));
  v_4 = (short)(- (((long)v_4 % (((long)v_6 + v_8) + 610L)) * (long)(
                   (int)((char)(2.21522794251e+38f - (float)p[0])) % (
                   (int)(~ p_11) + 112))));
  v = (unsigned long long)v_4;
  result = (signed char)(! (- (! v) - 18446744073709500598ULL));
  return result;
}



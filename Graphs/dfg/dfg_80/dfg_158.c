#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 148795886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, short p_7, unsigned short p_9, long p_11,
              double p_13)
{
  unsigned char v_17;
  short v_15;
  long long v_5;
  unsigned short v;
  long long result;
  v_17 = (unsigned char)143;
  v_15 = p_7;
  result = -985951074LL;
  v_5 = (long long)(~ (18446744073589877160ULL / (unsigned long long)(
                       (int)(! v_17) + 465)) + 18446744073709528332ULL);
  v = (unsigned short)(47327LL % (((v_5 % (long long)(p_11 + 420L)) * (long long)(
                                   (int)v_15 * -99)) / ((long long)(- (- p_13)) + 115LL) + 22LL));
  v_5 = (long long)((long)(- p_7) & ((18554L / (long)((int)p_9 + 836)) % -82L) * (
                                    (p_11 + (long)v) * (long)((int)((unsigned short)p_13) + 1060)));
  result = (long long)(-729421416L - (long)(- v)) / ((result + (long long)p) % (
                                                     ((long long)v - v_5) + 1022LL) + 399LL) - 461382206LL;
  return result;
}



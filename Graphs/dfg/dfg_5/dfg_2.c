//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940257511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, short p_11)
{
  unsigned int v_9;
  long v_6;
  long long v_4;
  unsigned char v;
  short result;
  v_4 = (long long)p;
  v_9 = (unsigned int)p_11;
  v_6 = (long)(! (~ (~ ((unsigned int)-7.02436387555e+37 % (v_9 + 291U)))));
  v = (unsigned char)(- (- (p * (double)((int)((short)-1.16934874944e+38) & 32240))));
  result = (short)((((long long)(-61107 | (int)v) - (v_4 - (long long)v_6)) >> (
                    (845229929LL + ((long long)v + 49492LL)) & 63LL)) % (long long)(
                   v_6 + 997L));
  return result;
}


